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
	ll n,m,x,y,total=0;
	cin>>n>>m;
	vi energy(n);
	vector <pair <ll,vi > > array(n);
	REP(i,n){
		cin>>energy[i];
		array[i].F=0;
		array[i].S.pb(energy[i]);
	}
	REP(i,n){
		DEBUG(array[i].F);
	}	
	REP(i,m){
		cin>>x>>y;
		array[x-1].F+=energy[y-1];
		array[x-1].S.pb(y-1);
		array[y-1].F+=energy[x-1];
		array[y-1].S.pb(x-1);	
	}
	REP(i,n){
		DEBUG(array[i].F);
	}

	REP(i,n){
		sort(all(array));
		total+=array[i].F;
		FOR(j,1,array[i].S.size()){
			array[array[i].S[j]].F-=array[i].S[0];
		}
	}
	cout<<total<<endl;

}
