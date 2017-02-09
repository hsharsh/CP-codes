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
	string recipe;
	ll b,s,c,pb,ps,pc,r,cb=0,cs=0,cc=0,total=0,x;
	cin>>recipe>>b>>s>>c>>pb>>ps>>pc>>r;
	
	REP(i,recipe.size()){
		if(recipe[i]=='B')
			cb++;
		else if(recipe[i]=='S')
			cs++;
		else
			cc++;
	}
	ll save=-1;
	ll end=1e13,beg=0,mid;
	while(true){
		if(beg>end)
			break;

		mid=(beg+end)/2;
		ll cost = max((ll)0,(cb*mid-b))*pb + max((ll)0,(cs*mid-s))*ps + max((ll)0,(cc*mid-c))*pc;

		if(cost<=r){
			save=mid;
			beg=mid+1;
		}
		else
			end=mid-1;

	}
	cout<<save<<endl;
}
