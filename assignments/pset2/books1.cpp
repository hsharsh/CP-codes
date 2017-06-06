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
#define pii	 		pair<int,int>
#define pll			pair<ll,ll>
#define F 			first
#define S 			second
#define ll 			long long
#define ull 		unsigned long long

vl a(510);
int n;

ll scribers(ll x){
	ll ret = 1, pages = 0;
    REP(i,n){
		if(pages + a[i] <= x ){
			pages += a[i];
		}
		else{
			++ret;
			pages = a[i];               
		}
	}
	return ret;
}

void partition(ll index, ll x, ll required){
	ll pages = 0, i = index;
    for(; i >= 0; --i){
    	if(pages + a[i] > x || i + 1 == required - 1){
    		partition(i, x, required-1);
    		break;
    	}
    	pages += a[i];
    }
    if(i>=0)
    	cout<< "/ ";
	for(++i; i < index + 1; i++)
		cout << a[i] << " ";
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int T;
	cin >> T;
	REP(I, T){
		ll beg = INT_MIN, end = 1e10, k;
		cin >> n >> k;
		REP(i, n){
			cin >> a[i];
			beg = max(beg,a[i]);
		}

		while(beg < end){
			ll mid = (beg + end) >> 1;
			if(scribers(mid) <= k)
				end = mid;
			else
				beg = mid+1;
		}
		partition(n-1, beg, k);
		cout << endl;
	}	
}
