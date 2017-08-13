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
	double k;
	vector<double> bal(n);
	REP(i, n){
		cin >> bal[i];
	}
	cin >> k;
	sort(all(bal));
	double sum;
	REP(i,n){
		sum += ((double)4/(double)3) * (3.14) * pow(bal[i],3) * pow(((double)100-k)/(double)100,n-i-1);
	}
	ll ans = sum*100;

	cout << ans/100 << ".";
	int second = ans%100;
	bool flag = false;
	REP(i,10){
		if(second == i)
			flag = true;
	}
	if(!flag){
		cout << second << endl;
	}
	else
		cout <<"0"<<second<<endl;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
/*	int t;
	cin >> t;
	while(t--)
*/		solve();	
}
