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

int n, length = 0;
vector<double> pathlength;
vi roads[MAX];
vb visited(MAX);

int dfs(int source, float prob){
//	cout << source << "->" << endl;
	visited[source] = 1;
	int count  = 0;
	for(auto i : roads[source]){
		if(!visited[i])
			count++;
	}
	
	if(!count){
		return 1;
	}

	for(auto i : roads[source]){
		if(!visited[i]){
			length++;
			int ch = dfs(i, prob * (float)1/(float)count);
			if(ch){
//				cout << source << " " << length << " " << count << " " << prob << endl; 
				pathlength.pb((float)length * prob * ((float)1/(float)count));
			}
			length--;
		}
	}
	return 0;
}

inline void solve(){
	cin >> n;
	REP(i,n-1){
		int u, v;
		cin >> u >> v;
		roads[u].pb(v);
		roads[v].pb(u);
	}

	dfs(1,1);
	double sum;
	for(auto i : pathlength){
		sum += i;
	}
	printf("%0.12lf\n", sum);
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
/*	int t;
	cin >> t;
	while(t--)
*/		solve();	
}
