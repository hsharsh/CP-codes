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

ll cost(vi s, int l, int n, int x){
	ll ret = 0;
	REP(i,n){
		ret += abs(x + i*l - s[i]);
	}
	return ret;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int t;
	cin >> t;
	REP(I,t){
		int n, l, a, b;
		cin >> n >> l >> a >> b;
		
		vi s(n);
		REP(i,n)
			cin >> s[i];
		sort(all(s));
		
		int beg = a, end = b - n * l;
		while(beg < end){
			int left = beg + (end - beg) / 3;
			int right = end - (end - beg) / 3;	
			if(cost(s, l, n, left) >= cost(s, l, n, right))
				beg = left + 1;
			else
				end = right - 1;
		}

		cout << min(cost(s, l, n, beg), cost(s,l,n,end)) << endl;
	}	
}
