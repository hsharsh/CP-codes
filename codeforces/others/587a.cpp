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
	ino;
 	int n,total=0,temp,maxn=1000021;
 	vi bit(maxn,0);
 	cin>>n;	
 	REP(i,n){
 		cin>>temp;
 		bit[temp]++;
 	}
 	REP(i,maxn-1){
 		bit[i+1]+=bit[i]/2;
 		bit[i]%=2;
 		total+=bit[i];
 	}
 	cout<<total<<endl;
}
