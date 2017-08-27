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
#define val 		first
#define weight		second
#define ll 			long long
#define ull 		unsigned long long
#define MAX			1000050



inline void solve(){
	vector<pii> adj[101];
	int n, m;
	FOR(i, 1, 100){
		FOR(j, 1, 7){
			if(i+j < 101){
				adj[i].pb({i+j,1});
			}
		}
	}

	cin >> n;
	REP(I, n){
		int u, v;
		cin >> u >> v;
		adj[u].pb({v,0});
	}
	cin >> m;
	vb check(6);
	REP(I, m){
		int u, v;
		cin >> u >> v;
		if(u > 93)
			check[u-94] = 1;
		adj[u].pb({v,0});
	}

	bool possible = 0;
	REP(i, 6){
		if(!check[i]){
			possible = 1;
		}
	}
	if(!possible){
		cout << -1 << endl;
		return;
	}
	vi distance(101,INT_MAX);
	distance[1] = 0;
	deque<int> q;
	q.push_back(1);

	while(!q.empty()){
		int source = q.front();
		q.pop_front();

		for(auto i : adj[source]){
			if(distance[i.val] > distance[source] + i.weight){
				distance[i.val] = distance[source] + i.weight;
				if(!i.weight){
					q.push_front(i.val);
				}
				else
					q.push_back(i.val);
			}
		}
	}
	cout << distance[100] << endl;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int t;
	cin >> t;
	while(t--)
		solve();	
}
