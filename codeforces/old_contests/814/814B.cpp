/*****************************************************************************************
You should enjoy the little detours...
Because that's where you'll find the things
more important than what you want...

Version	:	1.64
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

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int n,ea,eb;
	cin >> n;
	vi a(n), b(n), pos;
	vb ca(n+1,0), cb(n+1,0);
	REP(i,n){
		cin >> a[i];
		if(ca[a[i]])
			ea = a[i];
		ca[a[i]] = 1;
	}
	REP(i,n){
		cin >> b[i];
		if(cb[b[i]])
			eb = b[i];		
		if(a[i]!=b[i])
			pos.pb(i);
		cb[b[i]] = 1;
	}
	int ma, mb;
	FOR(i, 1, n+1){
		if(!ca[i])
			ma = i;
		if(!cb[i])
			mb = i;
	}
	bool pa = true;
	if(pos.size()==1)
		a[pos[0]] = ma;
	else{
		if(a[pos[0]] != a[pos[1]]){
			for(auto j : pos){
				if(a[j] == ea){
					a[j] = ma;
					break;
				}
			}
		}
		else{
			pa = false;
			for(auto j : pos){
				if(b[j] == eb){
					b[j] = mb;
					break;
				}
			}
		}
	}
	if(pa){
		REP(i,n)
			cout << a[i] << " ";
	}
	else{
		REP(i,n)
			cout << b[i] << " ";		
	}
	cout << endl;
}
