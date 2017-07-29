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
#define x 			first
#define y 			second
#define ll 			long long
#define ull 		unsigned long long

vi adj[150];
vb visited(150);

void dfs(int s){
	visited[s] = 1;
	for(auto i = adj[s].begin(); i != adj[s].end(); ++i){
		if(!visited[*i]){
			dfs(*i);
		}
	}
}
inline void solve(){
	int n;
	cin >> n;

	vector <pii> drifts(n);
	REP(i, n){
		int a, b;
		cin >> a >> b;
		drifts[i] = {a,b};
	}

	REP(i, n){
		REP(j, n){
			if(drifts[i].x == drifts[j].x || drifts[i].y == drifts[j].y){
				adj[i].pb(j);
				adj[j].pb(i);
			}
		}
	}

	int count = 0;
	REP(i, n){
		if(!visited[i]){
			count++;
			for(auto j = adj[i].begin(); j != adj[i].end(); ++j){
				if(!visited[*j]){
					dfs(*j);
				}
			}
		}
	}
	cout << count - 1 << endl;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	
	solve();	
}
