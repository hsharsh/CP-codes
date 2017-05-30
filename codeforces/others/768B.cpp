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

vb binary(55);

bool value(ll index,ll mlevel){
	ll i = 0, temp = -1;
	while(i < mlevel){
		if(index == temp + pow(2, mlevel-i-1)){
			return binary[i];
		}		
		if(index > (temp + pow(2, mlevel-i-1)))
			temp += pow(2, mlevel-i-1);
		i++;
	}
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	ll n, l, r;
	cin>>n>>l>>r;
	
	ll i = 0;
	while(n>0){
		binary[i] = n & 1;
		n = n >> 1;
		i++;
	}
	ll answer = 0;
	FOR(j,l-1,r){
		ll temp = value(j, i);
		answer += temp;
	}
	cout<<answer<<endl;
}
