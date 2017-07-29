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

ll n, k, q;
vl a(200002,0), b(200002,0), A(200003,0);


inline void solve(){
	cin >> n >> k >> q;
	int l,r;
	REP(i, n){
		scanf("%d %d",&l, &r);
		a[l]++;
		a[r+1]--;
	}
	FOR(i, 1, 200002){
		a[i] = a[i] + a[i-1];
		if(a[i] >= k)
			b[i]++;
	}
	FOR(i, 1, 200002){
		A[i] = A[i-1] + b[i];
	}

	REP(i, q){
		scanf("%d %d",&l, &r);
		printf("%lld\n", A[r] - A[l-1]);
	}
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	
	solve();	
}
