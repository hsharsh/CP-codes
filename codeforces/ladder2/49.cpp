#include <bits/stdc++.h>
using namespace std;

#define pi 3.141592653593
#define MIN -1000000001
#define MAX 1000000001
#define EPS 0.000000001

#define ino ios_base::sync_with_stdio(false)
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>(b);i--)
#define pb push_back
#define mp make_pair
#define vi vector<ll>
#define vii vector<vector<ll> >
#define ii pair<ll,ll>
#define F first
#define S second
#define vs vector<string>
#define ll long long
#define ull unsigned long long

int main(){
	ll n,count=1,max=MIN;
	cin>>n;
	vi a(n);
	REP(i,n)
		cin>>a[i];
	if(n>1)
		count++;
	ll i=0;
	while(i<n-2){
		if(a[i]+a[i+1]==a[i+2]){
			i++;
			count++;
		}
		else{
			if(count>max)
				max=count;
			count=2;
			i++;
		}
	}
	if(count>max)
		max=count;	
	cout<<max<<endl;
}
