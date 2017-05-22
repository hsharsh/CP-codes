/*****************************************************************************************
You should enjoy the little detours...
Becase that's where you'll find the things
more important than what you want...

Version	:	1.63
Author	:	Harshwardhan Praveen
*****************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define pi 			3.141592653593
#define MOD         1000000007
#define EPS 		0.000000001

#define cns 		ios_base::sync_with_stdio(false)
#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl
#define REP(i,n) 	for(ll i=0;i<(n);i++)
#define FOR(i,a,b) 	for(ll i=(a);i<(b);i++)
#define DFOR(i,a,b) for(ll i=(a);i>(b);i--)
#define pb 			push_back
#define mp 			make_pair
#define all(v) 		v.begin(),v.end()
#define rall(v) 	v.rbegin(),v.rend()
#define vi 			vector<int>
#define vl 			vector<ll>
#define vii 		vector<vector<int> >
#define vll 		vector<vector<ll> >
#define vs 			vector<string>
#define vb			vector<bool>
#define si 			set<int>
#define pii 		pair<int,int>
#define pll			pair<ll,ll>
#define F 			first
#define S 			second
#define ll 			long long
#define ull 		unsigned long long

int correct(int i,int n){
	if(i<0)
		return n-i;
	if(i>=n)
		return i%n;
	return i;
}
ll retmin(vi r, vb visited, int n, int s, int t){
	if(visited[s])
		return INT_MAX;
	if(abs(t-s)<r[s]||(n-abs(t-s))<r[s])
		return 1;
	visited[s]=true;
	ll ret;
	for(int i=s-r[s];i<=s+r[s];i++){
		ret = min(ret, 1 + retmin(r,visited,n,correct(i,n),t));
	}
	return ret;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int n,s,t,g,seed,p;
	cin>>n>>s>>t;
	vi r(n);
	vb visited(n,false);
	cin>>r[0]>>g>>seed>>p;
	FOR(i,1,n){
		r[i] = (r[i-1]*g + seed)%p;
	}
	cout<<retmin(r,visited,n,s,t)<<endl;
}
