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
	ll n,p,current=1,needed,total=0;
	cin>>n>>p;
	vi a(n);
	REP(i,n){
		cin>>a[i];
	}
	sort(all(a));
	REP(i,n){
		if(a[i]%p==0)
			needed = a[i]/p;
		else
			needed = a[i]/p+1;

		if(current==needed){
			total+=current;
			current++;
		}
		else if(current<needed){
			current=needed;
			total+=current;
			current++;
		}
		else{
			needed=current;
			total+=current;
			current++;
		}
	}
	cout<<total<<endl;
}
