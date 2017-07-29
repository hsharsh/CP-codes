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
#define MAX			100050

bool comp(pll a, pll b){
	return a.F < b.F;
}

int n, cnt;
priority_queue <int,vector<pll>,std::function<bool(pll, pll)>> q(comp);

void dfs(int source, vi adj[], vi &parent, vi children[], vi &dep, vb visited, vb &coins, int depth){
	visited[source] = 1;
	int count = 0;
	dep[source] = depth;
	for(auto i : adj[source]){
		if(!visited[i]){
			count++;
			parent[i] = source;
			children[source].pb(i);
			dfs(i,adj,parent,children,dep,visited,coins,depth+1);
		}
	}
	if(!count){
		q.push({depth,source});
		cnt++;
		coins[source] = 1;
	}
}

inline void solve(){
	cin >> n;

	cnt = 0;
	if(n == 1){
		cout << -1 << endl;
		return;
	}

	vi adj[n+1],children[n+1];
	vi parent(n+1);
	vi dep(n+1);
	vb visited(n+1);
	vb coins(n+1);
	REP(i, n-1){
		int u, v;
		cin >> u >> v;
		adj[u].pb(v);
		adj[v].pb(u);
	}

	visited[1] = 1;
	for(auto i : adj[1]){
		parent[i] = 1;
		children[1].pb(i);
		dfs(i,adj,parent,children,dep,visited,coins,1);
	}
/*
	FOR(i, 1, n+1){
		cout << i << "->" << parent[i] <<"->";
		for(auto j : children[i]){
			cout << j << " ";
		}
		cout << endl;
	}
	cout << "Leaves : ";
	while(!q.empty()){
		pii i = q.top();
		q.pop();
		cout << i.F << "->" << i.S << " ";
	}
	cout << endl;
*/
	
	while(!q.empty()){
		pii cur = q.top();
//		cout << cur.F << "->" << cur.S << endl;
		q.pop();
		if(!coins[parent[cur.S]]){
			if(parent[cur.S] == 1){
				coins[1] = 1;
				cnt++;
			}
			else{
				if(!coins[parent[parent[cur.S]]]){
					if(parent[parent[cur.S]] == 1){
						coins[1] = 1;
						cnt++;
					}
					else{
						parent[parent[cur.S]] == 1;
						cnt++;
						coins[parent[parent[cur.S]]] = 1;
						q.push({dep[parent[parent[cur.S]]],parent[parent[cur.S]]});
					}
				}
			}
		}

	}
/*	
	FOR(i, 1, n+1){
		cout << i << "->" << coins[i] << endl; 
	}
*/
	cout << cnt << endl;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int t;
		cin >> t;
	while(t--)
		solve();	
}

/*
1  
14
1 14
1 12
12 13
10 11
11 12
1 2 
2 3
2 8
2 4
4 5
4 6
8 7
8 9
*/