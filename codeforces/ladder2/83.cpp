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
	int n,m,a,b,c;
	cin>>n>>m;
	vi flag(n+1,-1);

	REP(i,m){
		cin>>a>>b>>c;
		if(flag[a] != -1){
			flag[b] = flag[a]%3 + 1;
			flag[c] = flag[b]%3 + 1;
		}
		else if(flag[b] != -1){
			flag[c] = flag[b]%3 + 1;
			flag[a] = flag[c]%3 + 1;
		}
		else if(flag[c] != -1){
			flag[a] = flag[c]%3 + 1;
			flag[b] = flag[a]%3 + 1;			
		}
		else{
			flag[a]=1;
			flag[b]=2;
			flag[c]=3;
		}
	}
	FOR(i,1,n+1)
		cout<<flag[i]<<" ";
	cout<<endl;
}
