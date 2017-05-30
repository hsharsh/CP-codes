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
	scanf("%d", &n);
	vi sher(10, 0), mor(10, 0);
	string t1,t2;
	cin >> t1 >> t2;
	
	REP(i, n){
		sher[t1[i]-'0']++;
		mor[t2[i]-'0']++;
	}

	int f = 0;
	vi a = mor, b = sher;
	REP(i,10){
		if(a[i] != 0){
			int j = 0;
			while(j <= i){
				int t = min(a[i],b[j]);
				a[i] -= t;
				b[j] -= t;
				j++;
			}
		}
		f += a[i];
	}
	
	printf("%d\n", f);
	
	f = 0;
	a = mor;
	b = sher;
	DFOR(i, 9, 0){
		if(a[i] != 0){
			int j = i-1;
			while(j >= 0){
				int t = min(a[i],b[j]);
				a[i] -= t;
				b[j] -= t;
				f += t;
				j--;
			}
		}
	}
	printf("%d\n", f);	

}
