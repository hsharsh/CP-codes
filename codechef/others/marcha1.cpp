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


bool knapsack(vi a, vector<vb> memo, int n, int k){
	if(n == 0 && k > 0)
		return false;
	if(k < 0)
		return false;
	if(k == 0)
		return true;
	if(memo[n][k])
		return memo[n][k];
	memo[n][k] = knapsack(a,memo,n-1,k) || knapsack(a,memo,n-1,k-a[n-1]);
	return memo[n][k];
}
int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int t;
	cin >> t;
	REP(I, t){
		int n, m;
		cin >> n >> m;
		vi a(n);
		REP(i,n)
			cin >> a[i];
		vector <vb> memo(n+1, vb(m+1,false));
		cout << (knapsack(a, memo, n, m) ? "Yes": "No") << endl;
	}
}
