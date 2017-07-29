/*****************************************************************************************
You should enjoy the little detours...
Because that's where you'll find the things
more important than what you want...

Version	:	1.65
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

#define MAXN 1e9
int n, m;
string s;
vi L(15,0),R(15,0);

inline void solve(){
	cin >> n >> m;
	DFOR(i, n-1, 0){
		cin >> s;
		FOR(j, 1, m + 1){
			if(s[j] == '1')
				L[i] = j;
		}
		R[i] = 0;
		DFOR(j, m, 1){
			if(s[j] == '1')
				R[i] = m + 1 - j; 
		}
	}
	while(L[n - 1] == 0)
		n--;

	if(n <= 1){
		cout << L[0] << endl; 
	}
	else{
		vii dp(n-1,vi(2,0));
		dp[0][0] = 2 * L[0];
		dp[0][1] = m + 1;
		FOR(i, 1, n-1){
			dp[i][0] = min(dp[i-1][0] + 2*L[i], dp[i-1][1] + m + 1) + 1;
			dp[i][1] = min(dp[i-1][1] + 2*R[i], dp[i-1][0] + m + 1) + 1;   
		}
		cout << min(dp[n-2][0]+L[n-1], dp[n-2][1] + R[n-1]) + 1 << endl;
	}
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	
	solve();	
}
