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

int main(){
	ll n,k,sw1=0,sw2=0,m=MIN,save,a,b;
	cin>>n>>k;
	vi ab(n+1,0);
	FOR(i,1,n+1){
		cin>>ab[i];
		if(i < k+1)
			sw1+=ab[i];
		if(i > k && i<2*k+1)
			sw2+=ab[i];
	}
	m=sw1+sw2;
	a=1;
	b=k+1;
	save = sw2;
	FOR(i,1,n-2*k+2){
		sw1=sw1-ab[i-1]+ab[i+k-1];
		sw2=save-ab[i+k-1]+ab[i+2*k-1];
		save = sw2;
		if(sw1+sw2>m){
			m = sw1+sw2;
			a=i;
			b=i+k;
		}
		FOR(j,i+k+1,n-k+2){
			sw2=sw2-ab[j-1]+ab[j+k-1];
			if(sw1+sw2>m){
				m = sw1+sw2;
				a=i;
				b=j;
			}
		}
	}
	cout<<a<<" "<<b<<endl;
}
