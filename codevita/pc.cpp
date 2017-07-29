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

int n;

inline void solve(){
	cin >> n;
	vll a(n,vl(5));
	vll dp(n+1,vl(5));

	REP(i, n){
		string str;
		cin >> str;
		stringstream ss(str);
		ll k;
		REP(j, 5){
			ss >> k;
			a[i][j] = k;
			ss.ignore();
			dp[i][j] = a[i][j];
		}
	}


	REP(i, n){
		REP(j, i){
			REP(k, 5){
				REP(l, 5){
					if(a[i][k] > a[j][l] && dp[i][k] < dp[j][l] + a[i][k])
						dp[i][k] = dp[j][l] + a[i][k];						
				}
			}
		}
	}
	
	ll answer = 0;
	REP(i, n){
		REP(j, 5)
			answer = max(answer, dp[i][j]);
	}
	cout << answer << endl;

}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
/*	int t;
	cin >> t;
	while(t--)
*/		solve();	
}
