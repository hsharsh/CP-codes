/*****************************************************************************************
You should enjoy the little detours...
Because that's where you'll find the things
more important than what you want...

Version	:	1.64
Author	:	Harshwardhan Praveen
*****************************************************************************************/
#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

#define REP(i,n) 	for(ll i=0;i<(n);++i)
#define FOR(i,a,b) 	for(ll i=(a);i<(b);++i)
#define ll 			long long

bool overflow(ll a, ll b){
	ll res = a * b;
	if(res / a != b)
		return 1;
	return 0;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	ll n, k;
	scanf("%lld %lld", &n, &k);

	ll sum = 1e18;
	if(!overflow(k, k + 1))
		sum = k * (k + 1) / 2;

	ll maxelem = -1;
	FOR(i, 1, sqrt(n)+1){
		if(n % i == 0){
			if(n/i >= sum)
				maxelem = max(maxelem, i);
			if(i >= sum)
				maxelem = max(maxelem, n/i);
		}
	}
	if(maxelem == -1)
		printf("-1\n");
	else{
		FOR(i, 1, k){
			printf("%lld ", i * maxelem);
		}
		printf("%lld\n", n - maxelem * (k * (k - 1) / 2 ));
	}
}