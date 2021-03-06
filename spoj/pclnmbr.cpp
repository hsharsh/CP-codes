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
#define DFOR(i,a,b) for(ll i=(a);i>(b);i--)
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

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int A, B, C, m;
	cin >> A >> B >> C >> m;
	int a = A, b = (A * B) / gcd(A,B), c =  (b * C) / gcd(b,C);
	DEBUG(a);
	DEBUG(b);
	DEBUG(c);
	REP(i, m){
		ll index,mid;
		ll beg = 0, end = 1e9*c + 1;
		cin >> index;
		while(beg + 1 < end){
			ll mid = (beg + end) >> 1;
			if(mid - (mid + b - 1)/b + (mid + c -1)/c < index)
				beg = mid;
			else
				end = mid;
			DEBUG(beg);
			DEBUG(end);
		}
		cout << a*end << endl;
	}
}
