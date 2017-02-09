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
	int m, n;
	cin>>n>>m;
	vi a(n);
	vector<pair<ll,vi> > x(m+1,mp(0,vi())),y(m+1,mp(0,vi()));
	pair<ll,vi > nonm(mp(0,vi()));
	REP(i,m+1)
		x[i].S.pb(i);
	REP(i,n){
		cin>>a[i];
		if(a[i]<=m){
			x[a[i]].F++;
			x[a[i]].S.pb(i);
		}
		else{
			x[0].S.pb(i);
			x[0].F++;
		}
	}

	y=x;
	if(x[0].F!=n){
		sort(x.rbegin(),--x.rend());
		sort(++y.begin(),y.end());
	}

	ll changes=0, mb=n/m,current=1;
	bool flag=true;

	vector<pair<ll,vi> >::iterator i = ++y.begin();
	vi::iterator j=++((x[0].S).begin());
	
	if(x[0].F==0){
		flag=false;
		j = ++((x[1].S).begin());		
	}
	
	while((*i).F<mb){
		while((*i).F<mb){
			if(flag){
				a[*j]=*((*i).S.begin());
				(*i).F++;
				changes++;
				j++;
				if(j==((x[0].S).end())){
					flag=false;
					j=++((x[1].S).begin());
					current=1;
				}
			}
			else{
				changes++;
				a[*j]=*((*i).S.begin());
				(*i).F++;
				j++;
				(x[current].F)--;
				if((x[current]).F==mb){
					flag=false;
					j=++((x[++current].S).begin());
				}
			}
		}
		if(changes==n)
			break;		
		i++;
	}
	cout<<mb<<" "<<changes<<endl;
	REP(i,n)
		cout<<a[i]<<" ";
	cout<<endl;
}
