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



inline void solve(){
	ll n, d, moves = 0;
	cin >> n >> d;
	vl a(n), sum, count;
	REP(i, n)
		cin >> a[i];

	vb visited(n, 0);

	REP(i, n){
		if(!visited[i]){
			ll cur = 0, co = 0;
			for(int j = i; j < n; j+=d){
				cur += a[j];
				visited[j] = 1;
				co++;
			}
			if(cur % co == 0)
				sum.pb(cur / co);
			else{
				cout << -1 << endl;
				return;
			}
		}
	}

	ll check = sum[0];
	for(auto i : sum){
		if(i != check){
			cout << -1 << endl;
			return;
		}
	}	

	REP(i, n){
		visited[i] = 0;
	}

	auto it = sum.begin();
	REP(i, n){
		if(!visited[i]){
			for(int j = i; j < n; j += d){
				visited[j] = 1;
				if(a[j] != *it){
					a[j+d] += a[j] - *it;
					moves += abs(a[j] - *it);
				}
			}
			it++;
		}
	}

	cout << moves << endl;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int t;
	cin >> t;
	while(t--)
		solve();	
}
