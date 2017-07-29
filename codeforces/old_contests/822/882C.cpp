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
#define ds 			pair<pii,pii>

inline bool comp(ds a, ds b){
	if(a.F.F < b.F.F)
		return 1;
	else if(a.F.F == b.F.F){
		if(a.S.F < b.S.S)
			return 1;
		else if(a.S.F == b.S.S){
			if(a.S.S < b.S.S)
				return 1;
		}
	}
	return 0;
}

inline void solve(){
	int n, x;
	cin >> n >> x;
	vector <ds> holiday(n);
	REP(i,n){
		int l, r, c;
		scanf("%d %d %d",&l, &r, &c);
		holiday[i] = {{l,r},{l-r+1,c}};
	}
	sort(all(holiday),comp);
	ll mincost = LONG_MAX;
	bool possible = 0;
	REP(i, n){
		bool cur = 1;
		int rem = x - a[i].S.F, cost = a[i].S.S;
		int beg = 0, end = n;
		while(beg + 1 < end){
			int mid = (beg + end) >> 1;
			if(a[mid].F.F > a[i].F.S)
				end = mid;
			else
				beg = mid;
		}
		if(end == n){
			cur = 0;
			continue;
		}
		beg = end;
		end = n - 1;
		while(beg + 1 < end){
			int mid = (beg + end) >> 1;
			if(a[mid].S.F == )
				end = mid;
			else
				beg = mid;
		}		
	}
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
/*	int t;
	cin >> t;
	while(t--)
*/		solve();	
}
