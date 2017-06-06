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
#define pii 		pair<int,int>
#define pll			pair<ll,ll>
#define F 			first
#define S 			second
#define ll 			long long
#define ull 		unsigned long long

ll cows(vl s, ll n, ll x){
	ll ret = 1,i = 0, start = 0;
	while(i < n){
//		DEBUG(i);
//		DEBUG(start);
		while(s[i] - s[start] <= x && i < n)
			i++;
		if(i == n){
//			DEBUG(s[start]);
//			DEBUG(s[i-1]);
//			DEBUG(x);
			if(s[i-1]-s[start] == x){
				return ret + 1;
			}
		}
		if(i != n){
			ret++;
//			DEBUG(s[i-1]);
//			DEBUG(s[start]);
			if(s[i-1] - s[start] == x)
				start = i - 1;
			else
				start = i;
		}
	}
//	DEBUG(ret);
	return ret;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int t;
	cin >> t;
	REP(I, t){
		ll n, c;
		cin >> n >> c;
		vl s(n);
		REP(i,n)
			cin >> s[i];
		sort(all(s));

		ll beg = 0, end = 1e9;
		while(beg + 1 < end){
//			DEBUG(beg);
//			DEBUG(end);
			ll mid = (beg + end) >> 1;
//			DEBUG(mid);
//			DEBUG(cows(s, n, mid));
			if(cows(s, n, mid) >= c)
				beg = mid;
			else
				end = mid;
		}
		cout << beg << endl;
	}	
}
