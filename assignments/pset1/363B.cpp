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
	int n,k,sum=0,sump=0,index;
	cin>>n>>k;
	vi fence(n);
	REP(i,k){
		cin>>fence[i];
		sump+=fence[i];
	}
	sum=sump;
	index=1;
	FOR(i,k,n){
		cin>>fence[i];
		sump=sump-fence[i-k]+fence[i];
		if(sump<sum){
			sum=min(sum,sump);
			index=i-k+2;
		}
	}
	cout<<index<<endl;
}
