/*****************************************************************************************
You should enjoy the little detours...
Because that's where you'll find the things
more important than what you want...

Version	:	1.66
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



inline void solve(){
	int n;
	cin >> n;
	vl a(n);

	REP(i, n)
		cin >> a[i];

	sort(all(a));
	map <ll,ll> check;

	REP(i, n){
		if(check.size() <= 3){
			check[a[i]]++;
		}
		else
			break;
	}

	map<ll,ll>::iterator i = check.begin();

	if(i->S >= 3)
		cout << (i->S)*(i->S-1)*(i->S-2)/6 << endl;
	else{
		if(i->S == 2){
			i++;
			cout << (i->S) << endl;
		}
		else{
			i++;
			if(i->S >= 2){
				cout << (i->S)*(i->S-1)/2 << endl;
			}
			else{
				i++;
				cout << i->S << endl;
			}
		}
	}
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	
	solve();	
}
