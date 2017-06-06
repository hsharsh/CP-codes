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
#define pii	 		pair<int,int>
#define pll			pair<ll,ll>
#define F 			first
#define S 			second
#define ll 			long long
#define ull 		unsigned long long

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int T;
	cin >> T;
	REP(I, T){
		int p, q, r;
		cin >> p >> q >> r;
		vi a(p),b(q),c(r);
		REP(i,p)
			scanf("%d", &a[i]);
		REP(i,q)
			scanf("%d", &b[i]);
		REP(i,r)
			scanf("%d", &c[i]);
		sort(all(a));
		sort(all(b));
		sort(all(c));
		vi A(p + 1, 0), C(r + 1, 0);
		REP(i,p)
			A[i+1] = (A[i] + a[i]) % MOD;
		REP(i,r)
			C[i+1] = (C[i] + c[i]) % MOD;
		ll sum = 0;
		REP(i,q){
			int sizea = upper_bound(all(a),b[i]) - a.begin();
			int sizec = upper_bound(all(c),b[i]) - c.begin();
			sum = (sum + (((ll)A[sizea] * (ll)sizec)%MOD * (ll)b[i])%MOD) % MOD;
			sum = (sum + (((ll)C[sizec] * (ll)sizea)%MOD * (ll)b[i])%MOD) % MOD;
			sum = (sum + ((((ll)b[i] * (ll)b[i])%MOD * (ll)sizea)%MOD * (ll)sizec)%MOD) % MOD;
			sum = (sum + (ll)A[sizea] * (ll)C[sizec]) % MOD;
		}
		cout << sum << endl;
	}	
}
