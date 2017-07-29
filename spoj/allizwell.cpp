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
#define F			first
#define S 			second
#define ll 			long long
#define ull 		unsigned long long
#define MAX			1000050

int r, c;
string maxtrix[150];
string s = "ALLIZZWELL";
int dx[] = {0, 1, 1, 1, 0, -1, -1, -1}, dy[] = {-1, -1, 0, 1, 1, 1, 0, -1};

inline bool check(int i, int j){
	if(i < 0 || i >=  r)
		return 0;
	if(j < 0 || j >= c)
		return 0;
	return 1;
}

bool findpath(int x, int y, vector<vb> visited, int pointer){
//	DEBUG(x);
//	DEBUG(y);
//	DEBUG(maxtrix[x][y]);
	bool ret = 0;
	if(pointer > 9)
		return 1;
	REP(i, 8){
		int x1 = x + dx[i], y1 = y + dy[i];
		if(check(x1, y1) && !visited[x1][y1] && maxtrix[x1][y1] == s[pointer]){
			visited[x1][y1] = 1;
			ret = ret || findpath(x1, y1, visited, pointer+1);
			if(!ret)
				visited[x1][y1] = 0;
		}
	}
	return ret;
}

inline void solve(){
	cin >> r >> c;
	vector <pii> start;
	REP(i, r){
		cin >> maxtrix[i];
		REP(j, c){
			if(maxtrix[i][j] == 'A')
				start.pb({i,j});
		}
	}
	bool possible = 0;
	for(auto i : start){
		vector <vb> visited(r, vb(c,0));
		visited[i.F][i.S] = 1;
		if(findpath(i.F, i.S, visited, 1)){
			possible = 1;
			break;
		}
	}
	cout << (possible ? "YES" : "NO") << endl;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int t;
	cin >> t;
	while(t--)
		solve();	
}
