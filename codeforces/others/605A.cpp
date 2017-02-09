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
	int n,count=1,maxc=0;
	cin>>n;
	int num;
	vi pos(n);
	REP(i,n){
		cin>>num;
		pos[num-1]=i;
	}
	REP(i,n-1){
		if(pos[i+1]>pos[i]){
			count++;
		}
		else{
			maxc=max(maxc,count);
			count=1;
		}
	}
	maxc=max(maxc,count);
	cout<<n-maxc<<endl;
}
