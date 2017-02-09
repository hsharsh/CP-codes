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
#define FORD(i,a,b) for(ll i=(a);i>(b);i--)
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
	int n, m;
	int a;
	vi ans;
	vector <bool> S(MAX);
	cin>>n>>m;
	FOR(i,1,n+1){
		cin>>a;
		S[a]=true;
	}
	
	for(int i=1;;i++){
		if(S[i]) continue;
		
		if(m >= i){
			ans.push_back(i);
			m -= i;
		}
		else
			break;
	}
	
	cout<<ans.size()<<endl;
	for(int i = 0; i < ans.size(); i++)
		cout<<ans[i]<<" ";
}