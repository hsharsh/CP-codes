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

bool bprimes[1000050];

void prime_genrator(ll n){
	bool arr[n];
	for (ll i = 2; i*i < n; i++){
		if (!arr[i]){
			for (ll j = i*i; j < n; j += i){
				arr[j] = true;
			}
		}
	}
	for (ll i = 2; i < n; i++)
	{
		if (!arr[i])
			bprimes[i] = 1;
	}

}

vi pnum(1000050),ans(1000050);


inline void solve(){

	prime_genrator(1000050);

	int cur = 0;
	REP(j,1000050){
		if(bprimes[j])
			cur++;
		pnum[j] = cur;
	}

	cur = 0;
	REP(j,1000050){
		if(bprimes[pnum[j]])
			cur++;
		ans[j] = cur;
	}

	int t,l,r;
	cin >> t;
	REP(j, t){
		cin >> l >> r;
		cout << ans[r] - ans[l-1] << endl;
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
