/*****************************************************************************************
You should enjoy the little detours...
Because that's where you'll find the things
more important than what you want...

Version	:	1.66
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



inline void solve(){
	int n, m;
	cin >> n >> m;
	vi adj[n+1];
	int u, v, s, source;
	REP(i, m){
		cin >> u >> v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	cin >> source;
	vi answer(n+1,INT_MAX);
	answer[source] = 0;
	vb visited(n+1);
	queue<int> q;

	q.push(source);
	while(!q.empty()){
		s = q.front();
		q.pop();
		visited[s] = 1;
		for(auto i = adj[s].begin(); i!= adj[s].end(); ++i){
			if(!visited[*i]){
				q.push(*i);
				answer[*i] = min(answer[*i], answer[s] + 6);
				visited[*i] = 1;
			}
		}
	}
	FOR(i, 1, n+1){
		if(i != source){
			if(answer[i] != INT_MAX)
				cout << answer[i] << " ";
			else
				cout << -1 << " ";
		}
	}
	cout << endl;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int t;
	cin >> t;
	while(t--)
		solve();	
}
