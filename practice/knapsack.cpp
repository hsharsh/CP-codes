/*****************************************************************************************
								Author: Harshwardhan Praveen
*****************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define pi 3.141592653593
#define MIN -1000000001
#define MAX 1000000001
#define EPS 0.000000001

#define cns ios_base::sync_with_stdio(false)
#define DEBUG(x) cout << '>' << #x << ':' << x << endl
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
#define DFOR(i,a,b) for(ll i=(a);i>(b);i--)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define vi vector<ll>
#define vii vector<vector<ll> >
#define ii pair<ll,ll>
#define F first
#define S second
#define vs vector<string>
#define ll long long
#define ull unsigned long long

ll knapsack(ll n, ll weight, vi v, vi w){
	if(n==0 || weight==0)
		return 0;
	if(w[n-1]>weight)
		return knapsack(n-1,weight,v,w);
	return max( v[n-1]+knapsack(n-1,weight-w[n-1],v,w) , knapsack(n-1,weight,v,w) );
}
int main(){
	ll n,weight;
	cin>>n>>weight;
	vi w(n),v(n);
	REP(i,n)
		cin>>v[i];
	REP(i,n)
		cin>>w[i];

	cout<<knapsack(n,weight,v,w)<<endl;
}
