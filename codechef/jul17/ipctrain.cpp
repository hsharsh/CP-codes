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
#define left		first
#define val			second
#define ll 			long long
#define ull 		unsigned long long
#define MAX			1000050

int n,days;

bool comp(pll a, pll b){
	return a.val < b.val;
}

inline void solve(){
	cin >> n >> days;
	vector <pll> trainers[days+1];
	
	REP(i, n){
		ll d,t,s;
		cin >> d >> t >> s;
		trainers[d].pb({t,s});
	}
	priority_queue <int,vector<pll>,std::function<bool(pll, pll)>> pq(comp);
	FOR(d, 1, days + 1){
		for(auto i : trainers[d]){
//			cout << i.val << "->" << i.left << endl;
			pq.push(i);
		}
		if(pq.size() > 0){
			pll rem = pq.top();
//			cout << rem.val << " " << rem.left << endl;
			pq.pop();
			if(rem.left > 1){
				rem.left--;
				pq.push(rem);
			}
		}
//		DEBUG(pq.size());
	}

	ll sadness = 0;
	while(!pq.empty()){
		pll elem = pq.top();
		pq.pop();
		sadness += (elem.val*elem.left);
	}
	cout << sadness << endl;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int t;
	cin >> t;
	while(t--)
		solve();	
}
