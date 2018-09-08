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
	ll even = 0, odd = 0, n, red = 0;
	cin >> n;
	vi a(n);

	REP(i,n)
		cin >> a[i];

	sort(all(a));
	int i = 0;
	while(i < n){
		if(a[i]==a[i+1]){
			ll step = upper_bound(all(a),a[i])-lower_bound(all(a),a[i]);
			red += (step-1)*(step)/2;
			if(a[i]%4==1 || a[i]%4==0){
				red += (upper_bound(all(a),a[i]+2)-lower_bound(all(a),a[i]+2))*step;
			}
			if(a[i]&1)
				odd+=step;
			else
				even+=step;	
			i+=step;
			continue;
		}
		if(a[i]%4==1 || a[i]%4==0){
			red += upper_bound(all(a),a[i]+2)-lower_bound(all(a),a[i]+2);
		}
		if(a[i]&1)
			odd++;
		else
			even++;
		i++;
	}
	cout << (odd*(odd-1)/2 + even*(even-1)/2 - red) << endl; 
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int t;
	cin >> t;
	while(t--)
		solve();	
}
