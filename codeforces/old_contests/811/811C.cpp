/*****************************************************************************************
You should enjoy the little detours...
Because that's where you'll find the things
more important than what you want...

Version	:	1.63
Author	:	Harshwardhan Praveen
*****************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define pi 			3.141592653593
#define MOD         1000000007
#define EPS 		0.000000001

#define cns 		ios_base::sync_with_stdio(false)
#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl
#define REP(i,n) 	for(ll i=0;i<(n);i++)
#define FOR(i,a,b) 	for(ll i=(a);i<(b);i++)
#define DFOR(i,a,b) for(ll i=(a);i>=(b);i--)
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
#define pii 		pair<int,int>
#define pll			pair<ll,ll>
#define F 			first
#define S 			second
#define ll 			long long
#define ull 		unsigned long long


int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int n;
	cin >> n;
	vi a(n),l(5050), r(5050);
	vl dp(n+1,0);
	REP(i, n){
		cin >> a[i];
	}

	REP(i,n)
		r[a[i]] = i;

	DFOR(i, n-1, 0)
		l[a[i]] = i;

	REP(i, n){
		bool possible = 1;
		int left = l[a[i]];
		ll x = 0;

		DFOR(j, i, left){
			if(r[a[j]] > i){
				dp[i+1] = dp[i];
				possible = 0;
				break;
			}
			left = min(left, l[a[j]]);
			if(j == l[a[j]])
				x ^= a[j];
		}

		if(possible)
			dp[i+1] = max(dp[i], x + dp[left]);
	}

	cout << *max_element(all(dp)) << endl;
}
