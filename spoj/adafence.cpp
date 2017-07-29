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

int n, k;

inline void solve(){
	cin >> n >> k;
	vb visited(n);
	vi a(n),b(n);

	cin >> b[0];
	a[0] = b[0];
	FOR(i, 1, n){
		cin >> b[i];
		a[i] = a[i-1] + b[i];
	}

	int count = 0, sum = a[n-1], current = 0;
	int step = sum / k;


	REP(i, n){
		if(i!=0){
			current += b[i-1];
			a[i-1] += sum;
		}
		int j = i;
		if(visited[i])
			continue;
/*		DEBUG(i);
		DEBUG(current);
		for(auto l : a){
			cout << l << " ";
		}
		cout << endl;
*/
		bool possible = 1;
		vi store;
		REP(I, k - 1){
			int beg = j, end = j+n;
			while(beg < end){
				int mid = (beg + end) >> 1;
				if(step*(I+1) > a[(mid)%n]-current)
					beg = mid+1;
				else
					end = mid;
			}
//			cout << step*(I+1) << " " << end << " " << a[(end)%n]-current << endl;
			if(step*(I+1) != a[(end)%n]-current || visited[(end+1)%n] == 1){
				possible = 0;
				break;
			}
			store.pb(end);
		}
		if(possible){
			visited[i] = 1;
//			cout << "Visited "<< i << " ";
			for(auto j : store){
				visited[j+1] = 1;
//				cout << j+1 << " ";
			}
//			cout << endl;
			count++;
		}
	}
	cout << count << endl;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int t;
	cin >> t;
	while(t--)
		solve();	
}
