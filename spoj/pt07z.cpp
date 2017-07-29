/*****************************************************************************************
You should enjoy the little detours...
Because that's where you'll find the things
more important than what you want...

Version	:	1.67
Author	:	Harshwardhan Praveen
*****************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define pi 			3.141592653593
#define MOD         1000000007
#define EPS 		0.000000001

#define cns 		ios_base::sync_with_stdio(false)
#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl
#define REP(i,n) 	for(ll i=0;i<(n);++i)
#define FOR(i,a,b) 	for(ll i=(a);i<(b);++i)
#define DFOR(i,a,b) for(ll i=(a);i>=(b);--i)
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
#define pii	 		pair<int,int>
#define pll			pair<ll,ll>
#define F 			first
#define S 			second
#define ll 			long long
#define ull 		unsigned long long
#define MAX			1000050

vb visited(MAX);
vi adj[MAX];
int maxdepth = -1, depth = 0;

void dfs(int source){
	visited[source] = 1;
	maxdepth = max(depth,maxdepth);
	for(auto i : adj[source]){
		if(!visited[i]){
			depth++;
			dfs(i);
			depth--;
		}
	}
}
inline void solve(){
	int n, u, v;
	cin >> n;
	if(n == 1)
		cout << 0 << endl;
	REP(i, n-1){
		cin >> u >> v;
		adj[u].pb(v);
		adj[v].pb(u);
	}

	visited[u] = 1;
	vi list;
	for(auto i : adj[u]){
		if(!visited[i]){
			depth = 1;
			maxdepth = -1;
			dfs(i);
			list.pb(maxdepth);
		}
	}

	sort(rall(list));
	for(auto i : list)
		cout << i << endl;
	if(list.size() == 1)
		cout << list[0] << endl;
	else
		cout << list[0]+list[1] << endl;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
/*	int t;
	cin >> t;
	while(t--)
*/		solve();	
}
