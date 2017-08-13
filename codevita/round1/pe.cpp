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
#define x 			first
#define y 			second
#define ll 			long long
#define ull 		unsigned long long
#define MAX			150

int n, m, l, cnt;

int matrix[MAX][MAX];
int visited[MAX][MAX];

int dx[] = {0, 1, 0, -1}, dy[] = {-1, 0, 1, 0};

bool inline check(int x, int y){
	if(x == -1 || x == n)
		return false;
	if(y == -1 || y == m)
		return false;
	return true;
}

void dfs(int sx, int sy){
	visited[sx][sy] = 1;
	cnt++;
	REP(i, 4){
		int x1 = sx + dx[i];
		int y1 = sy + dy[i];
		if(check(x1,y1)){
			if(!visited[x1][y1]){
				dfs(x1,y1);
			}
		}
	}
}

inline void solve(){
	cin >> n >> m >> l;

	REP(i, n){
		REP(j, m){
			cin >> matrix[i][j];
			if(!matrix[i][j])
				visited[i][j] = 1;
		}
	}

	vi sizes;
	REP(i, n){
		REP(j, m){
			cnt = 0;
			if(!visited[i][j] && matrix[i][j]){
				dfs(i,j);
			}
			if(cnt)
				sizes.pb(cnt);
		}
	}

	sort(rall(sizes));

	int answer = 0;
	REP(i, l){
		answer += sizes[i];
	}
	cout << answer << "  " << sizes.size() << endl;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
/*	int t;
	cin >> t;
	while(t--)
*/		solve();
}
