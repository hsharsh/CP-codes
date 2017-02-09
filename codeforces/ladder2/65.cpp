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
	ll Min=MAX,Max=MIN,minc=0,maxc=0,n,ans;
	cin>>n;
	vi beauty(n);
	REP(i,n){
		cin>>beauty[i];
		Max=max(Max,beauty[i]);
		Min=min(Min,beauty[i]);
	}

	minc=count(all(beauty),Min);
	maxc=count(all(beauty),Max);
	ans=maxc*minc;
	if(Max==Min){
		ans=maxc*(minc-1)/2;
		if(maxc==2){
			ans=1;
		}
	}
	cout<<Max-Min<<" "<<ans<<endl;
}
