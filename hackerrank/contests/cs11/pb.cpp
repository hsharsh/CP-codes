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

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	string s;
	cin >> s;
	ll magic = 0;
	ll k, b, m, currenttemp = 0;
	cin >> k >> b >> m;
	REP(i,k){
		currenttemp = currenttemp + (((s[i]-'0')%m) *power_modulo(b,k-i-1,m))%m;
	}
	magic += (currenttemp+m)%m;
	FOR(i,k,s.size()){
		currenttemp -= ((((s[i-k]-'0')%m) *power_modulo(b,k-1,m))%m) ;
		currenttemp = (currenttemp*b)%m;
		currenttemp += (s[i]-'0');
		magic += (currenttemp+m)%m;
	}
	cout<<magic<<endl;
}
