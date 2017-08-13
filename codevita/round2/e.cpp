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

ll i[6];

inline bool check(){
	REP(j,6){
		REP(k,6){
			if(i[j] == i[k] && j != k)
				return false;
		}
	}
	return true;
}

inline void solve(){
	int n;
	cin >> n;
	vl a(n);

	string str;
	cin >> str;
	stringstream ss(str);
	ll k;
	REP(j, n){
		ss >> k;
		a[j] = k;
		ss.ignore();
	}
	sort(rall(a));

	ll summax = 0;
	while(i[0] < 6){
		i[1] = 0;
		while(i[1] < 6){
			i[2] = 0;
			while(i[2] < 6){
				i[3] = 0;
				while(i[3] < 6){
					i[4] = 0;
					while(i[4] < 6){
						i[5] = 0;
						while(i[5] < 6){

							if(check()){

								ll s1 = a[i[0]] + 4*(a[i[1]] + a[i[3]]) + 6*a[i[2]] + a[i[4]];
								ll s2 = a[i[5]] + 4*(a[i[4]] + a[i[2]]) + 6*a[i[3]] + a[i[1]];
								ll cursum = s1*s2;
								if(cursum > summax){
									summax = max(summax,cursum);
								}
							}
							i[5]++;
						}
						i[4]++;
					}
					i[3]++;
				}
				i[2]++;
			}
			i[1]++;
		}
		i[0]++;
	}
	cout << summax << endl;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
/*	int t;
	cin >> t;
	while(t--)
*/		solve();	
}
