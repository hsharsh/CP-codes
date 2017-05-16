/*****************************************************************************************
You should enjoy the little detours...
Becase that's where you'll find the things
more important than what you want...

Version	:	1.6
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
#define DFOR(i,a,b) for(ll i=(a);i>(b);i--)
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

ll power_modulo(ll base, ll exp, ll mod){
	ll result = 1;
	base %= mod;
	while(exp > 0){
		if(exp%2 == 1)
			result = (result*base) % mod;
		exp = exp>>1;
		base = (base*base) % mod;
	}
	return result;
}

ll knapsack(vll &memo, vi a, ll n, ll k, ll required){
	if((k==0||n==0) && required>0)
		return INT_MAX;
	if(required==0)
		return 0;
	if(required<0)
		return INT_MAX;
	if(memo[n][required])
		return memo[n][required];
	DEBUG(n);
	DEBUG(k);
	DEBUG(required);

	ll t1 = knapsack(memo,a,n,k-1,required);
	ll t2 = INT_MAX;
	if(a[k]!=-1)
		t2 = a[k-1] + knapsack(memo,a,n-1,k-1,required-a[k-1]);
	memo[n][required]= min(t1,t2);
	DEBUG(memo[n][required]);
	return memo[n][required];
}

int main(){
	int t;
	cin>>t;
	REP(I,t){
		int n,k;
		cin>>n>>k;
		vi a(k,0);
		REP(i,k){
			cin>>a[i];
			DEBUG(a[i]);
		}
		cout<<"yolo";	
		vll memo(n,vl(k,0));
/*		if(knapsack(memo,a,n,k,k)>INT_MAX)
			cout<<-1;
		else
			cout<<knapsack(memo,a,n,k,k);
*/
	}		
}
