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

vb check(26);
string good, pattern, match;
int pos = -1;
bool possible = 0;

inline bool checksize(){
	if(pattern.size() - 1 > match.size())
		return 0;
	if(pattern.size() > match.size() && pos == -1)
		return 0;
	return 1;
}
inline void solve(){
	possible = 1;
	cin >> match;
	if(!checksize()){
		possible = 0;
		return;
	}
	
	int j = 0;
	REP(i, match.size()){
//		cout << match[i] << " " << pattern[j] << " " << i << " " << j << " " << possible << endl;
		if(!possible)
			break;
		if(pattern[j] == '?'){
			if(!check[match[i] - 'a'])
				possible = 0;
			j++;
			continue;
		}
		if(pattern[j] == '*'){

			REP(k, match.size()-pattern.size() + 1){
				if(check[match[i] - 'a']){
					possible = 0;
					break;
				}
				i++;
			}
			i--;
			j++;
			continue;
		}
		if(pattern[j] != match[i])
			possible = 0;
		j++;
	}
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int t;
	cin >> good;
	REP(i, good.size()){
		check[good[i]-'a'] = 1;
	}

	cin >> pattern;

	REP(i,pattern.size()){
		if(pattern[i] == '*')
			pos = i;
	}
	cin >> t;
	while(t--){
		solve();
		cout << (possible ? "YES" : "NO") << endl;	
	}
}
