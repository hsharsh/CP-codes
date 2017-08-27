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
	string s, t;
	cin >> s >> t;
	int n = s.size();
	vi a(26), b(26);
	REP(i,n){
		a[s[i]-'a']++;
		b[t[i]-'a']++;
	}
	bool a_in_b = 1, b_in_a = 1, win_a = 0;
	REP(i, 26){
		if(a[i] && !b[i])
			a_in_b = 0;
		if(b[i] && !a[i])
			b_in_a = 0;
	}
	if(!a_in_b){
		REP(i, 26){
			if(a[i] >= 2){
				if(!b[i]){
					win_a = 1;
				}
			}
		}

		if(b_in_a){
			win_a = 1;
		}
	}

	cout << (win_a ? "A" : "B" ) << endl;

}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int t;
	cin >> t;
	while(t--)
		solve();	
}
