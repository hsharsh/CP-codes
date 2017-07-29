/*****************************************************************************************
You should enjoy the little detours...
Because that's where you'll find the things
more important than what you want...

Version	:	1.64
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

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int n, k, d;
	cin >> n >> k >> d;
	vii dp(2,vi(n+1,0));
	dp[0][0] = 1;
	
	FOR(i, 1, n - d + 1){
		DFOR(j, i - 1 , max((int)(i - d + 1), 0))
			dp[0][i] = (dp[0][i] + dp[0][j]) % MOD;
	}
	FOR(i, 1, n + 1){
		DFOR(j, i - 1, max((int)(i - k), 0)){
			dp[1][i] = (dp[1][i] + dp[1][j]) % MOD;
			if(i - j >= d)
				dp[1][i] = (dp[1][i] + dp[0][j]) % MOD;
		}
	}

	cout << dp[1][n] << endl;
}
