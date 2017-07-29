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

int n;
vi h(10000), c(10000);

ll cost(int x){
	ll ret = 0;
	REP(i, n){
		ret += abs(h[i] - x)*c[i];
	}
	return ret;
}

void solve(){
	cin >> n;
	REP(i, n){
		cin >> h[i];
	}
	REP(i, n){
		cin >> c[i];
	}
	int beg = 0, end = 10000;
	while(beg + 2 < end){
		int lthird = beg + (end - beg) / 3;
		int rthird = end - (end - beg) / 3;
		if(cost(lthird) < cost(rthird))
			end = rthird;
		else
			beg = lthird;
	}
	cout << min(cost(beg),min(cost(beg+1),cost(beg+2))) << endl;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int t;
	cin >> t;
	while(t--)
		solve();	
}
