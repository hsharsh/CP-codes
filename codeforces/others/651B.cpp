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
#define all(v) v.begin(),v.end()
#define vi vector<ll>
#define vii vector<vector<ll> >
#define ii pair<ll,ll>
#define F first
#define S second
#define vs vector<string>
#define ll long long
#define ull unsigned long long

int main(){
 	int n,count=0,maxc=0;
 	cin>>n;
 	vi beauty(n);
 	REP(i,n)
 		cin>>beauty[i];
 	sort(all(beauty));
	REP(i,n-1){
 		if(beauty[i+1]==beauty[i]){
 			count++;
 			maxc=max(count,maxc);
 		}
 		else
 			count=0;
 	}
 	cout<<n-maxc-1<<endl;
}
