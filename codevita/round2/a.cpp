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

ll sum = 0;


inline void solve(){
	string s;
	cin >> s;

	REP(i, 6){
		int cur = s[i] - 'A';
		if(i != 5){
			int next = s[i+1] - 'A';
			if(cur == 9 && next == 0)
				cur = next;
			else if(cur == 8 && next == 1)
				cur = next;
			else if(cur == 7 && next == 2)
				cur = next;
			else if(cur == 6 && next == 3)
				cur = next;
			else if(cur == 5 && next == 4)
				cur = next;											
		}
		sum += cur * pow(10,5-i);
	}
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int t;
	ll x;
	cin >> t;
	while(t--)
		solve();
	cin >> x;
	if(sum > x){
		cout << "GREEDY" << endl;
		cout << sum - x << endl;
	}
	else
		cout << "INNOCENT" << endl;	
}
