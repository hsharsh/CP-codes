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

vector <ll> v;

bool super_lucky(ll number){
	int seven=0,four=0;
	while(number>0){
		if(number%10==4)
			four++;
		else
			seven++;
		number/=10;
	}
	return ((four==seven)?true:false);
}

void generate(ll n){
	if(n>7777777777)
		return;
	if(n>0){
		if(super_lucky(n))
			v.pb(n);
	}
	generate(n*10+4);
	generate(n*10+7);
}

int main(){
	generate(0);
	ll n;
	cin>>n;
	sort(all(v));
	ll beg=0,end=v.size()-1;
	ll mid,save;
	while(true){
		if(beg>end)
			break;
		mid = (beg+end)/2;
		if(v[mid]==n){
			save = v[mid];
			break;
		}
		if(v[mid]>n){
			save=v[mid];
			end=mid-1;
		}
		else{
			beg=mid+1;
		}
	}
	cout<<save<<endl;
}
