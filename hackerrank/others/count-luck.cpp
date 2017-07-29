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

int n, m, k;
bool complete = 0;
int dx[] = {0, 1, 0, -1}, dy[] = {-1, 0, 1, 0};
bool visited[150][150];

bool inline check(int x, int y){
	if(x == -1 || x == n)
		return false;
	if(y == -1 || y == m)
		return false;
	return true;
}

int recursion(int x, int y, string forest[], int moves){
	
//	DEBUG(x);
//	DEBUG(y);
//	DEBUG(forest[x][y]);
	visited[x][y] = 1;

	if(forest[x][y] == '*'){
		complete = 1;
		return moves;
	}

	vb ch(4,0);

	REP(i, 4){
		int x1 = x + dx[i];
		int y1 = y + dy[i];
		if(check(x1,y1))
			if(!visited[x1][y1] && forest[x1][y1] != 'X')
				ch[i] = 1;
	}
	int cur = 0;

	REP(i,4){
		if(ch[i])
			cur++;
	}
//	DEBUG(cur);
	if(cur > 1){
//		cout << x << " " << y << " " << endl;
		moves++;
	}

	int ans = 0;
	REP(i,4){
		if(ch[i] && !complete){
			 ans = recursion(x + dx[i], y + dy[i], forest, moves);
		}
	}

	return ans;
}

inline void solve(){
	pii start;
	cin >> n >> m;
	string forest[n];
	REP(i,n)
		cin >> forest[i];

	REP(i,n){
		REP(j,m){
			if(forest[i][j] == 'M'){
				start.x = i;
				start.y = j;
			}
			visited[i][j] = 0;
		}
	}
	cin >> k;

	complete = 0;
	if(recursion(start.x,start.y,forest,0) == k)
		cout << "Impressed";
	else
		cout << "Oops!";
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
