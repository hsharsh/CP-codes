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
#define ds  		pair<pii,pair<int,bool> >

vi a(100050);
int n, m;

bool sort1(ds a, ds b){
	if(a.F.F < b.F.F)
		return true;
	if(a.F.F == b.F.F){
		if(a.F.S < b.F.S)
			return true;
	}
	return false;
}

bool sort2(ds a, ds b){
	if(a.S.F < b.S.F)
		return true;
	return false;
}


inline void solve(){
	cin >> n >> m;
	vector <ds> queries(m,{{0,0},{0,0}});
	REP(i, n){
		scanf("%d", &a[i]);
	}
	int l, r;
	REP(i, m){
		scanf("%d %d", &l, &r);
		queries[i] = {{l-1,r-1},{i,0}};
		if(l == r)
			queries[i].S.S = 1;
	}
	sort(all(queries),sort1);
	int start = -1, end = -1;
	int i = 0, j = 0;
	bool done = false;
	while(i < n && !done){
		start = i;
		while(a[i+1] >= a[i] && i < n){
			i++;
		}
		while(a[i+1] <= a[i] && i < n){
			i++;
		}
		if(i>start){
			end = i;
			if(i == n)
				end--;
			while(queries[j].F.F < end){
				while(start <= queries[j].F.F && queries[j].F.S <= end){
					queries[j].S.S = 1;
					j++;
					if(j >= m){
						done = true;
						break;
					}
				}
				if(queries[j].F.F >= end)
					break;
				else
					j++;
				if(j >= m){
					done = true;
					break;
				}
			}
		}
		else	
			i++;
//		DEBUG(start + 1);
//		DEBUG(end + 1);
	}
	sort(all(queries),sort2);
	for(vector<ds>::iterator it = queries.begin(); it!= queries.end();it++){
//		cout << it->F.F+1 << " " << it->F.S+1 << " " << it->S.S << endl;
		cout << (it->S.S ? "Yes" : "No") << endl;
	}
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	
	solve();	
}
