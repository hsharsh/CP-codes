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
	int n, m;
	cin >> n >> m;
	vii a(n,vi(m));
	vi r(n,INT_MAX), c(m,INT_MAX);
	if(n < m){
		REP(i,n){
			REP(j,m){
				cin >> a[i][j];
				r[i] = min(r[i], a[i][j]);
			}
		}

		int moves = 0;

		for(auto i : r)
			moves += i;

		REP(i,n){
			REP(j,m){
				a[i][j] -= r[i];
			}
		}

		bool possible = 1;

		REP(i,n){
			REP(j,m){
				if(a[i][j] > 0)
					possible = 0;
			}
		}

		if(possible){
			cout << moves << endl;
			REP(i,n){
				if(r[i] > 0){
					while(r[i]--)
						cout << "row " << i+1 << endl;
				}
			}
			return;
		}

		REP(i,n){
			REP(j,m){
				c[j] = min(c[j], a[i][j]);
			}
		}

		for(auto i : c)
			moves += i;


		REP(j,m){
			REP(i,n){
				a[i][j] -= c[j];
			}
		}

		possible = 1;

		REP(i,n){
			REP(j,m){
				if(a[i][j])
					possible = 0;
			}
		}
		if(possible){
			cout << moves << endl;
			REP(i,n){
				if(r[i] > 0){	
					while(r[i]--)
						cout << "row " << i+1 << endl;
				}
			}
			REP(j,m){
				if(c[j] > 0){
					while(c[j]--)
						cout << "col " << j+1 << endl;
				}
			}		
		}
		else
			cout << -1 << endl;
	}
	else{
		REP(i,n){
			REP(j,m){
				cin >> a[i][j];
				c[j] = min(c[j], a[i][j]);
			}
		}

		int moves = 0;

		for(auto i : c)
			moves += i;

		REP(i,n){
			REP(j,m){
				a[i][j] -= c[j];
			}
		}

		bool possible = 1;

		REP(i,n){
			REP(j,m){
				if(a[i][j] > 0)
					possible = 0;
			}
		}

		if(possible){
			cout << moves << endl;
			REP(j,m){
				if(c[j] > 0){
					while(c[j]--)
						cout << "col " << j+1 << endl;
				}
			}
			return;
		}

		REP(i,n){
			REP(j,m){
				r[i] = min(r[i], a[i][j]);
			}
		}

		for(auto i : r)
			moves += i;


		REP(j,m){
			REP(i,n){
				a[i][j] -= r[i];
			}
		}

		possible = 1;

		REP(i,n){
			REP(j,m){
				if(a[i][j])
					possible = 0;
			}
		}
		if(possible){
			cout << moves << endl;
			REP(j,m){
				if(c[j] > 0){	
					while(c[j]--)
						cout << "col " << j+1 << endl;
				}
			}
			REP(i,n){
				if(r[i] > 0){
					while(r[i]--)
						cout << "row " << i+1 << endl;
				}
			}		
		}
		else
			cout << -1 << endl;		
	}
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	
	solve();	
}
