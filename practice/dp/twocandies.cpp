/*****************************************************************************************
You should enjoy the little detours...
Becase that's where you'll find the things
more important than what you want...

Version	:	1.5
Author	:	Harshwardhan Praveen
*****************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define pi 			3.141592653593
#define MIN 		-1000000001
#define MAX 		1000000001
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
	
	int m=0,n;
	cin>>n;
	vi a(n);
	REP(i,n){
		cin>>a[i];
		m+=a[i];
	}
	vector<bool> dp(m+1,false);
	dp[0]=true;
	REP(i,n){
		for(int j=m; j>=a[i]; j--){
			dp[j] = dp[j] || dp[j-a[i]];
		}
	}
	int i=m/2,j=m/2;
	bool flag=true;
	while((!dp[i] || !dp[j]) && i<m+1 && j>=0){
		if(flag){
			i++;
			flag=false;
		}
		else{
			j--;
			flag=true;
		}
	}
	REP(i,m+1)
		cout<<dp[i]<<endl;
	if(flag)
		cout<<i<<endl;
	else
		cout<<j<<endl;
}
