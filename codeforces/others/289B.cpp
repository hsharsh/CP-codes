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

int cost(vii a, int n, int m, int x){
	int ret = 0;
	REP(i,n){
		REP(j,m){
			ret += abs(x - a[i][j]);
		}
	}
	return ret;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int n, m, d;
	cin >> n >> m >> d;
	vii a(n,vi(m));
	bool possible = true;
	
	int beg = INT_MAX, end = INT_MIN;
	REP(i,n){
		REP(j,m){
			cin >> a[i][j];
		}
	}

	int check = a[0][0]%d;
	REP(i,n){
		REP(j,m){
			if(a[i][j]%d != check)
				possible = false;
			a[i][j] /= d;
			beg = min(beg, a[i][j]);
			end = max(end, a[i][j]);
		}
	}

	if(!possible){
		cout << -1 << endl;
		return 0;
	}

	beg--;
	end++;
	while(beg+2 < end){
		int leftthird = beg + (end - beg) / 3;
		int rightthird = end - (end - beg) / 3;
//		DEBUG(beg);
//		DEBUG(end);
		if(cost(a, n, m, leftthird) >= cost(a, n, m, rightthird))
			beg = leftthird;
		else
			end = rightthird;
	}
//	DEBUG(beg);
	cout << min(min(cost(a, n, m, beg),cost(a, n, m, beg+1)),cost(a, n, m, beg+2)) << endl;
}
