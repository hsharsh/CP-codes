#include <bits/stdc++.h>
using namespace std;

#define pi 3.141592653593
#define MIN -1000000001
#define MAX 1000000001
#define EPS 0.000000001

#define ino ios_base::sync_with_stdio(false)
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FORD(i,a,b) for(int i=(a);i>(b);i--)
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vii vector<vector<int> >
#define ii pair<ll,ll>
#define F first
#define S second
#define vs vector<string>
#define ll long long
#define ull unsigned long long

vector <ll> v;
void generate(ll n){
	if(n>4444444444)
		return;
	if(n>0)
		v.pb(n);
	generate(n*10+4);
	generate(n*10+7);
}

int main(){
	ll l,r,total=0;
	cin>>l>>r;
	generate(0);
	sort(v.begin(),v.end());
	ll i=0;
	while(l>v[i])
		i++;
	while(l<=r){
		total+=v[i]*(min(v[i],r)-l+1);
		l=v[i]+1;
		i++;
	}
	cout<<total<<endl;
}
