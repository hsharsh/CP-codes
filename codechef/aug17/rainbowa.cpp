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



inline void solve(){
	int n;
	cin >> n;
	vi a(n);
	REP(i, n){
		cin >> a[i];
	}

	vi forward(8),backward(8);
	int cur = 1, count = 0;;
	REP(i, n){
		if(a[i] == cur){
			forward[cur]++;
			count++;
		}
		else{
			cur++;
			if(a[i] == cur){
				forward[cur]++;
				count++;
			}
		}
		if(cur > 7)
			break;
	}

	cur = 1;
	DFOR(i, n-1, 0){
		if(a[i] == cur){
			backward[cur]++;
			count++;
		}
		else{
			cur++;
			if(a[i] == cur){
				backward[cur]++;
				count++;
			}			
		}
		if(cur > 7)
			break;
	}

	bool flag = 1;

	FOR(i, 1, 8){
//		cout << forward[i] << " " << backward[i] << endl;
		if(forward[i] != backward[i]){
			flag = 0;
			break;
		}
		if(forward[i] < 1){
			flag = 0;
			break;
		}
	}

//	DEBUG(count);
	if(flag && count - forward[7] == n)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int t;
	cin >> t;
	while(t--)
		solve();	
}
