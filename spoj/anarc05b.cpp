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

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int n;
	while(true){
		cin >> n;
		if(n == 0)
			break;
		vi a(n+1, 0);
		vi check(20020, -1);
		REP(i, n){
			int temp;
			cin >> temp;
			a[i+1] = a[i] + temp;
			check[temp + 10000] = i;
		}

		ll answer = 0, startb = 0, starta = 0;
		int m;
		cin >> m;
		vi b(m+1,0);
		REP(i, m){
			int temp;
			cin >> temp;
			b[i+1] = b[i] + temp;
			if(check[temp + 10000] != -1){
				answer += max(a[check[temp+10000]]-a[starta],b[i]-b[startb]);
				starta = check[temp+10000];
 				startb = i;
			}
		}
		answer += max(a[n]-a[starta],b[m]-b[startb]);
		cout << answer << endl;
	}
}