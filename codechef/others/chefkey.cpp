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
	int t,n,m,c,count,i,j;
	cin>>t;
	while(t--){
		count=0;
		cin>>n>>m>>c;
		i=c/n;
		j=c/i;
		while(i<=n && j<=m){
			DEBUG(i)
			DEBUG(j)
			if(i*j==c)count++;
			i++;
			j=c/i;			
		}
		i=c/m;
		j=c/i;
		while(i<=n && j<=m){
			DEBUG(i)
			DEBUG(j)
			if(i*j==c)count++;
			i++;
			j=c/i;			
		}
		cout<<count<<endl;		
	}
}
