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


int main(){
	string s;
	cin>>s;
	int m,l,r;
	vi query(s.size(),0);
	FOR(i,1,s.size()){
		if(s[i]==s[i-1]){
			query[i]=query[i-1]+1;
		}
		else
			query[i]=query[i-1];
	}

	cin>>m;
	REP(i,m){
		cin>>l>>r;
		cout<<query[r-1]-query[l-1]<<endl;
	}
}
