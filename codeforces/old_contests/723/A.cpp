#include <bits/stdc++.h>
using namespace std;

#define pi 3.141592653593
#define MIN -1000000001
#define MAX 1000000001
#define EPS 0.000000001

#define ino ios_base::sync_with_stdio(false)
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>(b);i--)
#define pb push_back
#define mp make_pair
#define vi vector<ll>
#define vii vector<vector<ll> >
#define ii pair<ll,ll>
#define F first
#define S second
#define vs vector<string>
#define ll long long
#define ull unsigned long long

int main(){
	int min=MAX;
	vi x(3);
	cin>>x[0]>>x[1]>>x[2];
	sort(x.begin(),x.end());
	FOR(i,x[0],x[2]+1)
		if(abs(x[0]-i)+abs(x[1]-i)+abs(x[2]-i)<min)
			min = abs(x[0]-i)+abs(x[1]-i)+abs(x[2]-i);
	cout<<min<<endl;
}
