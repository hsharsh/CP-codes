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
#define FV(i,v) for(ll i:v)
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
#define DFOR(i,a,b) for(ll i=(a);i>(b);i--)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define vi vector<ll>
#define vii vector<vector<ll> >
#define si set<ll,ll>
#define ii pair<ll,ll>
#define F first
#define S second
#define vs vector<string>
#define ll long long
#define ull unsigned long long

int main(){
	vi x(3),y(3);
	REP(i,3){
		cin>>x[i]>>y[i];
	}
	cout<<3<<endl;
	cout<<x[0]+x[1]-x[2]<<" "<<y[0]+y[1]-y[2]<<endl;
	cout<<x[1]+x[2]-x[0]<<" "<<y[1]+y[2]-y[0]<<endl;
	cout<<x[2]+x[0]-x[1]<<" "<<y[2]+y[0]-y[1]<<endl;
}
