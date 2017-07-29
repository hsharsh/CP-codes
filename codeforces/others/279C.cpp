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

int a[100050], dp[2][100050];
int n, m;

inline void solve(){
	cin >> n >> m;
	FOR(i, 1, n + 1)
		scanf("%d",&a[i]);
	FOR(i, 1, n + 1){
		if(a[i-1] >= a[i])
			dp[1][i] = dp[1][i-1] + 1;
		else
			dp[1][i] = 1;
	}
	DFOR(i, n, 0){
		if(a[i] <= a[i+1])
			dp[0][i] = dp[0][i+1] + 1;
		else
			dp[0][i] = 1;
	}
	int l,r;
	REP(I,m){
		scanf("%d %d", &l, &r);
		if(dp[0][l]+dp[1][r] > r - l)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	
	solve();	
}
