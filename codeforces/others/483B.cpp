/*****************************************************************************************
You should enjoy the little detours...
Because that's where you'll find the things
more important than what you want...

Version	:	1.63
Author	:	Harshwardhan Praveen
*****************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define pi 			3.141592653593
#define MOD         1000000007
#define EPS 		0.000000001

#define cns 		ios_base::sync_with_stdio(false)
#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl
#define REP(i,n) 	for(ll i=0;i<(n);i++)
#define FOR(i,a,b) 	for(ll i=(a);i<(b);i++)
#define DFOR(i,a,b) for(ll i=(a);i>=(b);i--)
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
#define pii 		pair<int,int>
#define pll			pair<ll,ll>
#define F 			first
#define S 			second
#define ll 			long long
#define ull 		unsigned long long


ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

ll lcm(ll a, ll b){
	return (a*b)/gcd(a,b);
}

ll a, b, x, y;

bool check(ll mid, ll l){
	ll req1, req2;

	req1 = a - mid/y + mid/l;
	if(req1 < 0)
		req1 = 0;
	req2 = b - mid/x + mid/l;
	if(req2 < 0)
		req2 = 0;
	
	ll req = req1 + req2;
	ll have = mid - mid/x - mid/y + mid/l;
	
//	DEBUG(have);
//	DEBUG(req);	
	
	if(have < req)
		return true;
	return false;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/

	cin >> a >> b >> x >> y;
	ll l = lcm(x, y);
	ll beg = 1, end = 2e9+1;
	while(beg + 1 < end){
		ll mid = (beg + end) >> 1;
//		cout<<endl;
//		DEBUG(beg);
//		DEBUG(end);
//		DEBUG(mid);
		if(check(mid,l))
			beg = mid;
		else
			end = mid;
	}
	cout << end << endl;
}
