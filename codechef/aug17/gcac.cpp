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

int n, m;

inline void solve(){
	cin >> n >> m;
	vl minsalary(n), offeredsalary(m), maxjoboffer(m);
	REP(i, n){
		cin >> minsalary[i];
	}

	REP(i, m){
		cin >> offeredsalary[i] >> maxjoboffer[i];
	}

	vector<pii> cand[n];
	REP(i,n){
		string s;
		cin >> s;
		REP(j,m){
			if((int)(s[j]-'0') == 1)
				cand[i].pb({offeredsalary[j],j});
		}
	}
	REP(i, n){
		sort(rall(cand[i]));
	}

	ll numjobs = 0,	totsalary = 0, compzero = 0;

	vi employedcount(m,0);

	REP(i, n){
		for(auto j : cand[i]){
			if(offeredsalary[j.S] >= minsalary[i] && maxjoboffer[j.S] > 0){
					maxjoboffer[j.S]--;
					numjobs++;
					employedcount[j.S]++;
					totsalary += offeredsalary[j.S];
					break;
			}
		}
	}

	REP(i, m){
		if(employedcount[i] == 0){
			compzero++;
		}
	}
	cout << numjobs << " " << totsalary << " " << compzero << endl;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int t;
	cin >> t;
	while(t--)
		solve();	
}
