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
	ll n,x1,x2,x3,x4;
	bool check = false;
	cin>>n;
	vi points(n);
	REP(i,n)
		cin>>points[i];
	REP(i,n-3){
		x1 = min(points[i],points[i+1]);
		x2 = max(points[i],points[i+1]);
		FOR(j,i+2,n-1){
			x3 = min(points[j],points[j+1]);
			x4 = max(points[j],points[j+1]);
			if(x3>x1 && x2>x3 && x4>x2){
				check=true;
			}
			if(x1>x3 && x4>x1 && x2>x4){
				check=true;
			}
		}
	}
	cout<<((check)?"yes":"no")<<endl;
}
