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

ll n, k, s, t;

ll cal_time(ll c, ll d){
	if(d > c)
		return INT_MAX;
	if(c >= 2*d)
		return d;
	else
		return 3*d - c;
}
bool reach(ll c, vi g){
	ll time = 0;
	ll prev = 0;
	for(auto i : g){
		time += cal_time(c, i - prev);
		prev = i;
	}
	time += cal_time(c, s - prev);
	if(time <= t)
		return true;
	return false;
}
int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/

	cin >> n >> k >> s >> t;
	vector <pii> cars(n);
	REP(i,n)
		cin >> cars[i].F >> cars[i].S;
	vi stations(k);
	REP(i,k)
		cin >> stations[i];
	sort(all(stations));
	ll beg = 1, end = 1e9;
	while(beg < end){
		ll mid = (beg + end) >> 1;
		if(reach(mid,stations))
			end = mid;
		else
			beg = mid + 1;
	}
	int minprice = INT_MAX;
	for(auto p : cars){
		if(p.S >= beg)
			minprice = min(minprice, p.F);
	}
	if(minprice == INT_MAX)
		cout << -1 << endl;
	else
		cout << minprice << endl;
}
