/*****************************************************************************************
You should enjoy the little detours...
Because that's where you'll find the things
more important than what you want...

Version	:	1.66
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



inline void solve(){
	int n, m;
	cin >> n >> m;
	vi a(n), l(m);
	vb completed(n+1);
	REP(i, m)
		cin >> l[i];
	bool possible = true;
	REP(i, m - 1){
		int cur = l[i], next = l[i+1];
		if(a[cur - 1] == 0){
			int val = (next > cur ? next - cur : n + next - cur);
			if(completed[val])
				possible = false;
			else{
				completed[val] = true;
				a[cur - 1] = val;
			}
		}
		else if(a[cur - 1] != (next > cur ? next - cur : n + next - cur)){
			possible = false;
		}
	}
	if(possible){
		stack<int> remain;
		FOR(i, 1, n+1){
			if(!completed[i]){
				remain.push(i);
			}
		}
		REP(i,n){
			if(!a[i]){
				cout << remain.top() << " ";
				remain.pop();
			}
			else
				cout << a[i] << " ";
		}
		cout << endl;
	}
	else
		cout << -1 << endl;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	
	solve();	
}
