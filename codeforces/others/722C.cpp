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

#define MAX 100050

int parent[MAX],rnk[MAX];
bool visited[MAX];

map <ll,ll> val;

ll fnd(ll x){
	if(parent[x] != x)
		parent[x] = fnd(parent[x]);
	return parent[x];
}

ll uniun(ll x, ll y){
	ll px = fnd(x);
	ll py = fnd(y);

	if(rnk[px] > rnk[py])
		parent[py] = px;
	else
		parent[px] = py;
	if(rnk[px] == rnk[py])
		rnk[py]++;
}

inline void solve(){
	int n;
	cin >> n;
	vi a(n),b(n);
	REP(i,n+1)
		parent[i] = i;
	REP(i, n)
		cin >> a[i];
	REP(i, n)
		cin >> b[i];
	reverse(all(b));

	ll maxseg = 0;
	vl ans;
	ans.pb(0);

	for(auto x : b){
		visited[x] = 1;
		ll temp = 0;
		if(x != 1){
			if(visited[x-1]){
				ll p = fnd(x-1);
				uniun(x,x-1);
				temp += val[p];
			}
		}
		if(x != n){
			if(visited[x+1]){
				ll p = fnd(x+1);
				uniun(x,x+1);
				temp += val[p];
			}
		}
		val[fnd(x)] = temp + a[x-1];
		maxseg = max(temp + a[x-1],maxseg);
		ans.pb(maxseg);
	}
	DFOR(i, n-1 , 0)
		printf("%lld\n",ans[i]);
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	
	solve();	
}
