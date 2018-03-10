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
	int n;
	cin >> n;
	int digit[n];
	ll a = 0, b = 0;

	REP(i, n){
		cin >> digit[i];
		a += digit[i]*pow(10,2*n-1-2*i) + 9*pow(10,2*n-2-2*i);
		b += digit[i]*pow(10,2*n-1-2*i);
	}

	a = sqrt(a/10) + 1;
	b = sqrt(b/10);
	
	ll i = 0;
	
	for (i = a; i >= b; i--){
		ll num = i*i;
		string s = to_string(num);
		bool flag = 1;
		REP(j, s.size()){
			if(!(j&1)){
				if(s[j] - '0' != digit[j/2])
					flag = 0;
			}
			if(!flag)
				break;			
		}
		if(flag)
			break;
	}
	cout << i << endl;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
/*	int t;
	cin >> t;
	while(t--)
*/		solve();	
}
