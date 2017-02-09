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
	int n,m,small=MAX;
	string s;

	cin>>n>>m;
	vii state(n,vi(3,0));
	vector< vector<bool> > check(n,vector<bool>(3,false));
	REP(i,n){
		cin>>s;
		REP(j,m){
			if(!check[i][0]){
				if(isdigit(s[j])){
					check[i][0]=true;
					state[i][0]=j;
				}
			}
			if(!check[i][1]){
				if(islower(s[j])){
					check[i][1]=true;
					state[i][1]=j;
				}
			}
			if(!check[i][2]){
				if((s[j]=='#'||s[j]=='*'||s[j]=='&')){
					check[i][2]=true;
					state[i][2]=j;
				}
			}
		}
	}
	REP(i,n){
		REP(j,3){
			if(!state[i][j])
			cout<<state[i][j]<<" ";
		}
		cout<<endl;
	}
	REP(i,n){
		REP(j,n){
			REP(k,n){
				if(i!=j && j!=k && i!=k && check[i][0] && check[j][0] && check[k][0]){
					small = min(small,state[i][0]+state[j][1]+state[k][2]);
				}
			}
		}
	}
	cout<<small<<endl;
}
