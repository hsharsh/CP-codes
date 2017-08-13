/*****************************************************************************************
You should enjoy the little detours...
Because that's where you'll find the things
more important than what you want...

Version	:	1.67
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
#define MAX			1000050
#define ds 			pair<ll,pair<ll,ll> >

inline bool comp(ds a, ds b){
	if(a.S.F > b.S.F)
		return true;
	else if(a.S.F == b.S.F){
		if(a.S.F < b.S.F)
			return true;
	}
	return false;
}
inline void solve(){
	ll m, x;
	cin >> m >> x;
	vector<ds> eggs(m);
	ll sum = 0;
	REP(i,m){
		cin >> eggs[i].S.F;
		sum += eggs[i].S.F;
		eggs[i].F = i;
	}
	if(sum <= x){
		x = sum - 1;
		cout << "Sorry, we can only supply "<< x << " eggs" << endl;	
	}
	else
		cout << "Thank you, your order for " << x << " eggs are accepted" << endl; 

	sort(all(eggs),comp);
	
	int j = 0;
	while(j, m){
		if(eggs[j].S.F - x >= 0){
			eggs[j].S.S = x;
			x = 0;
			break;
		}
		else{
			eggs[j].S.S = eggs[j].S.F;
			x -= eggs[j].S.F;
		}
		j++;
	}
	sort(all(eggs));
	REP(i,m){
		cout << eggs[i].S.F << "\t" << eggs[i].S.S << "\t" << eggs[i].S.F - eggs[i].S.S << endl;
	}
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
/*	int t;
	cin >> t;
	while(t--)
*/		solve();	
}
