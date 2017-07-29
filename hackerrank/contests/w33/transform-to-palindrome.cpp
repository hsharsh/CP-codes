/*****************************************************************************************
You should enjoy the little detours...
Because that's where you'll find the things
more important than what you want...

Version	:	1.64
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

int n, k, m, x, y;
vi adj[100050];
vb visited(100050,false);
vi connected(100050, -1);
vi a(1050);

int lps(){
   int i, j, cl;
   vii L(m,vi(m,1));
 
    FOR(cl, 2, m + 1){
    	REP(i, m - cl + 1){
    		j = i+cl-1;
    		if (a[i] == a[j] && cl == 2)
    			L[i][j] = 2;
    		else if (a[i] == a[j])
    			L[i][j] = L[i+1][j-1] + 2;
    		else
    			L[i][j] = max(L[i][j-1], L[i+1][j]);
    	}
    }
    return L[0][m-1];
}

void dfs(int s, int index){
	visited[s] = true;
	connected[s] = index;
	for(auto i : adj[s]){
		if(!visited[i]){
			dfs(i,index);
		}
	}
}

void solve(){
	cin >> n >> k >> m;
	REP(i, k){
		scanf("%d %d", &x, &y);
		adj[x].pb(y);
		adj[y].pb(x);
	}
	int index = -1;
	REP(i, m){
		cin >> a[i];
		if(!visited[a[i]]){
			index++;
			dfs(a[i],index);
		}
	}
	REP(i,m){
		a[i] = connected[a[i]];
	}
	cout << lps() << endl;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	solve();
}
