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

int n,m,q;

inline void solve(){
	si horizontal, vertical;
	cin >> n >> m >> q;
	horizontal.insert(0);
	vertical.insert(0);
	horizontal.insert(n);
	vertical.insert(m);
	REP(i,q){
		int cmd, var;
		cin >> cmd >> var;
		if(cmd){
			vertical.insert(var);
		}
		else
			horizontal.insert(var);
	}
	int prev = 0, y = 0, x = 0;
	for(auto i : vertical){
		int cur = i - prev;
		prev = i;
		y = max(y, cur);
	}
	prev = 0;
	for(auto i : horizontal){
		int cur = i - prev;
		prev = i;
		x = max(x, cur);
	}
	cout << x*y << endl;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int t;
	cin >> t;
	while(t--)
		solve();	
}
