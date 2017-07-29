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
#define F 			first
#define S 			second
#define ll 			long long
#define ull 		unsigned long long

ll m, b;

inline ll bananas(ll x, ll y){
	return ((x * (x + 1)) / 2 ) * (y + 1) + ((y * (y + 1)) / 2 ) * (x + 1);  
}

inline void solve(){
	cin >> m >> b;
	ll ans = -1;
	REP(i, b + 1){

		ll beg = 0, end = (-1 * i * m) + (b * m);
		while(beg + 2 < end){
			ll lthird = beg + (end - beg)/3;
			ll rthird = end + (end - beg)/3;
			if(bananas(rthird,i) > bananas(lthird,i))
				beg = lthird;
			else
				end = rthird;
		}
		ll current = -1, count = 0;
		while(beg <= (-1 * i * m) + (b * m) && count < 3){
			current = max(current, bananas(beg,i));
			beg ++;
			count++;
		}
		ans = max(current,ans);
	}
	cout << ans << endl;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	
	solve();	
}
