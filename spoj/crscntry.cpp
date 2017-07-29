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

int lcs(vi a, vi b){
	int m = a.size();
	int n = b.size();
	vii dp(m+1, vi(n+1, 0));
	FOR(i, 1, m+1){
		FOR(j, 1, n+1){
			if(a[i-1] == b[j-1])
				dp[i][j] = dp[i-1][j-1] + 1;
			else
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	}
	return dp[m][n];
}

inline void solve(){
	vi agnes;
	int point;
	while(true){
		cin >> point;
		if(point == 0)
			break;
		agnes.pb(point);
	}
	int answer = INT_MIN;
	cin >> point;
	while(point != 0){
		vi tom;
		while(point != 0){
			tom.pb(point);
			cin >> point;
		}
		answer = max(answer,lcs(agnes,tom));
		cin >> point;
	}
	cout << answer << endl;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int q;
	cin >> q;
	while(q--)
		solve();	
}
