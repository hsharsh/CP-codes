/*****************************************************************************************
You should enjoy the little detours...
Because that's where you'll find the things
more important than what you want...

Version	:	1.67
Author	:	Harshwardhan Praveen
*****************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define pi 			3.141592653593
#define MOD         1000000007
#define EPS 		0.000000001

#define cns 		ios_base::sync_with_stdio(false)
#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl
#define REP(i,n) 	for(ll i=0;i<(n);++i)
#define FOR(i,a,b) 	for(ll i=(a);i<(b);++i)
#define DFOR(i,a,b) for(ll i=(a);i>=(b);--i)
#define pb 			push_back
#define mp 			make_pair
#define all(v) 		v.begin(),v.end()
#define rall(v) 	v.rbegin(),v.rend()
#define vi 			vector<int>
#define vl 			vector<ll>
#define vii 		vector<vector<int> >
#define vll 		vector<vector<ll> >
#define vs 			vector<string>
#define vb			vector<bool>
#define si 			set<int>
#define pii	 		pair<int,int>
#define pll			pair<ll,ll>
#define F 			first
#define S 			second
#define ll 			long long
#define ull 		unsigned long long
#define MAX			1000050

int n, p;

inline void solve(){
	cin >> n >> p;
	vi a(n), store[5050];
	vb visited(n);

	int m = -1;
	REP(i, n){
		cin >> a[i];
		store[a[i]].pb(i);
		m = max(a[i],m);
	}

	stack<int> st[m+1];
	REP(i, n){
		if(a[i] == m){
			visited[i] = 1;
			st[m].push(i);
		}
	}
	
	DFOR(cur, m, 0){

		for(vi::iterator i = store[cur].begin(); i != store[cur].end(); i++){
			if(!visited[*i])
				st[cur].push(*i);
		}
		while(!st[cur].empty()){
			int i = st[cur].top();
			st[cur].pop();
			if(i > 0 && !visited[i-1]){
				if(a[i-1] < a[i] - 1)
					a[i-1] = a[i] - 1;
					st[cur-1].push(i-1);
					visited[i-1] = 1;
			}
			if(i < n-1 && !visited[i+1]){
				if(a[i+1] < a[i] - 1)
					a[i+1] = a[i] - 1;
					st[cur-1].push(i+1);
					visited[i+1] = 1;
			}			
		}
	}
	REP(i, n)
		cout << a[i] << " ";
	cout << endl;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int t;
	cin >> t;
	while(t--)
		solve();	
}
