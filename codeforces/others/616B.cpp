#include <bits/stdc++.h>
using namespace std;

#define pi 3.141592653593
#define MIN -1000000001
#define MAX 1000000001
#define EPS 0.000000001

#define ino ios_base::sync_with_stdio(false)
#define DEBUG(x) cout << '>' << #x << ':' << x << endl
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
#define DFOR(i,a,b) for(ll i=(a);i>(b);i--)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define rall(v) v.begin(),v.end(),greater<int>()
#define vi vector<ll>
#define vii vector<vector<ll> >
#define ii pair<ll,ll>
#define F first
#define S second
#define vs vector<string>
#define ll long long
#define ull unsigned long long

int main(){
	ll n,m,cost=MIN;
	cin>>n>>m;
	vi rmin(n,MAX);
	vector <vector<ll> > array(n,vector<ll> (m));
	
	REP(i,n)
		REP(j,m)
			cin>>array[i][j];

	REP(i,n)
		REP(j,m)
				rmin[i]=min(rmin[i],array[i][j]);
	
	REP(i,n)
		cost=max(rmin[i],cost);
	cout<<cost<<endl;
}
