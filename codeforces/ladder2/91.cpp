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

inline ll get_sum(vi psum, ll start, ll end){
	return psum[end]-psum[start-1];
}

int main(){
	ll n,k;
	cin.tie(0);
	cns;
	cin>>n>>k;
	vi a(n+1,0),psums(n+1,0); 

	FOR(i,1,n+1){
		cin>>a[i];
		psums[i]=psums[i-1]+a[i];
	}

	ii ans=mp(n-2*k+1,n-k+1), secondary=mp(n-k+1,get_sum(psums,n-k+1,n));
	ll msum=get_sum(psums,n-2*k+1,n-k)+get_sum(psums,n-k+1,n);
	
	DFOR(i,n-2*k+1,0){
		ll cur = get_sum(psums,i+k,i+2*k-1);
		if(cur>=secondary.S)
			secondary = mp(i+k,cur);
		cur = get_sum(psums,i,i+k-1)+secondary.S;
		if(cur>=msum){
			msum = cur;
			ans = mp(i,secondary.F);
		}
	}

	cout<<ans.F<<" "<<ans.S<<endl;
}
