/*****************************************************************************************
This one moment when you know you're not a sad story,
you are alive.
And you stand up and see the lights on buildings
and everything that makes you wonder,
when you were listening to that song
on that drive with the people you love most in this world.
And in this moment, I swear, we are infinite.

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
#define FV(i,v) 	for(ll i:v)
#define FOR(i,a,b) 	for(ll i=(a);i<(b);i++)
#define DFOR(i,a,b) for(ll i=(a);i>(b);i--)
#define pb 			push_back
#define mp 			make_pair
#define all(v) 		v.begin(),v.end()
#define rall(v) 	v.rbegin(),v.rend()
#define vi 			vector<int>
#define vii 		vector<vector<int> >
#define vl 			vector<ll>
#define vll 		vector<vector<ll> >
#define si 			set<ll,ll>
#define ii 			pair<ll,ll>
#define F 			first
#define S 			second
#define vs 			vector<string>
#define ll 			long long
#define ull 		unsigned long long

ll power_modulo(ll base, ll exp,ll mod){
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

/*****************************
INCOMPLETE INCOMPLETE INCOMPLETE
*****************************/

int main(){
	ll n,payA=0,payG=0;
	string s="";
	cin>>n;
	vector <ii> price(n);
	REP(i,n)
		cin>>price[i].F>>price[i].S;

	int i=0;
	while(i<n){
		if(abs(payA+price[i].F-payG)<=500){
			payA+=price[i].F;
			s.append("A");
		}
		else{
			payG+=price[i].S;
			s.append("G");
		}
		i++;
	}
	if(abs(payA-payG)<=500)
		cout<<s<<endl;
	else
		cout<<-1<<endl;
}
