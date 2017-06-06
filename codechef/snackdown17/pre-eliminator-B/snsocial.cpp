/*****************************************************************************************
You should enjoy the little detours...
Because that's where you'll find the things
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
#define DFOR(i,a,b) for(ll i=(a);i>=(b);i--)
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

int n, m;
int dx[] = {0, 1, 1, 1, 0, -1, -1, -1}, dy[] = {1, 1, 0, -1, -1, -1, 0, 1};

bool valid(int x, int y){
	if(x < 0 || x >= n)
		return false;
	if(y < 0 || y >= m)
		return false;
	return true;
}

void solve(){
	int maxa = INT_MIN;
	cin >> n >> m;
	vector<vb> visited(n, vb(m,false));	
	vii a(n,vi(m));
	queue < pair<pii,int> > q;

	REP(i,n){
		REP(j,m){
			cin >> a[i][j];
			maxa = max(maxa, a[i][j]);
		}
	}
	REP(i,n){
		REP(j,m){
			if(a[i][j] == maxa){
				q.push({ {i, j}, 0 });
				visited[i][j] = true;
			}
		}
	}	
	int steps = 0;
	while(!q.empty()){
		int x = q.front().F.F, y = q.front().F.S;
		int distance = q.front().S;
		steps = max(steps,distance);

		q.pop();

		REP(i,8){
			if( valid(x + dx[i], y + dy[i]) ){
				if(visited[x + dx[i]][y + dy[i]] == false){
					q.push({ { x + dx[i], y + dy[i] }, distance + 1});
					visited[x + dx[i]][y + dy[i]] = true;
				}
			}
		}
	}
	cout << steps << endl;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int T;
	cin >> T;
	REP(I, T)
		solve();	
}
