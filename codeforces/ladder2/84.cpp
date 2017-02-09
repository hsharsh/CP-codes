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

vi fruits(3010,0);

int main(){
	ll n,v,total=0,collect,temp,a,b;
	cin>>n>>v;

	REP(i,n){
		cin>>a>>b;
		fruits[a]+=b;
	}

	FOR(i,1,3010){
		temp=v;
		if(fruits[i-1]>0){
			collect=min(fruits[i-1],temp);
			total+=collect;
			temp-=collect;
		}
		if(v>0){
			collect=min(fruits[i],temp);
			total+=collect;
			fruits[i]-=collect;
		}
	}
	cout<<total<<endl;
}
