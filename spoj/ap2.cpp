/*****************************************************************************************
You should enjoy the little detours...
Because that's where you'll find the things
more important than what you want...

Version	:	1.64
Author	:	Harshwardhan Praveen
*****************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
	ll x, y, sum;
	cin >> x >> y >> sum;
	ll n = (2 * sum) / (x + y);
	ll d = (y - x) / (n - 5);
	ll a = x - 2 * d;
	cout << n << endl;
	for(ll i = 0; i < n; ++i)
		printf("%lld ", a + i * d);
	cout << endl;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int t;
	cin >> t;
	while(t--)
		solve();	
}
