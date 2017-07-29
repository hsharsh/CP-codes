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

vi a(100050,0);
vi dp(100050,0)

ll recursive(ll n){
	if(n==0)
		return ;
	if(n >= 2){
		dp[n] = max(dp[n],recursive[n-2] + a[n-2]);
	}
	if(n >= 4){
		dp[n] = max(dp[n],dp[n-4] + a[n-4] + a[n-3]);
	}
	if(n >= 2){
		dp[n] = max(dp[n],dp[n-6] + a[n-6] + a[n-5] + a[n-4]);
	}
}

inline void solve(){
	int n;
	cin >> n;
	REP(i, n)
		cin >> a[i];
	REP(i, n+1)
		dp[i] = 0;

}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int t;
	cin >> t;
	while(t--)
		solve();	
}
