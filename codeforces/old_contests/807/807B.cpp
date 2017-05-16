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
	int p,x,y;
	cin>>p>>x>>y;
	int i=x,mx = x/50;
	while(i>=y)
		i-=50;
	i+=50;
	i/=50;
	while(true){
		int j = i%475;
		bool found=false;
		REP(k,25){
    		j = (j*96+42)%475;
    		if(j+26==p){
    			if(i>mx){
    				if((i-mx)%2==1)
    					cout<<(i-mx)/2 + 1<<endl;
    				else
    					cout<<(i-mx)/2<<endl;
    			}
    			else{
   					cout<<0<<endl;
    			}
    			found=true;
    			break;
    		}
		}
    	if(found==true)
    		break;
    	i++;
	}
}
