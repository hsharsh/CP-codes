#include <bits/stdc++.h>
using namespace std;

#define pi 3.141592653593
#define MIN -1000000001
#define MAX 1000000001
#define EPS 0.000000001

#define ino ios_base::sync_with_stdio(false)
#define DEBUG(x) cout << '>' << #x << ':' << x << endl
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>(b);i--)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define rall(v) v.begin(),v.end(),greater<int>()
#define vi vector<ll>
#define vii vector<vector<ll> >
#define ii pair<ll,ll>
#define F first
#define S second
#define vs vector<string>
#define ll long long
#define ull unsigned long long

int main(){
	int n,a,b,c;
	vi M(3);
	vi m(3);
	cin>>n;
	cin>>m[0]>>M[0];
	cin>>m[1]>>M[1];
	cin>>m[2]>>M[2];
	a=m[0];
	b=m[1];
	c=m[2];
	n-=(m[0]+m[1]+m[2]);
	while(n>0 && a<M[0]){
		n--;
		a++;	
	}
	while(n>0 && b<M[1]){
		n--;
		b++;	
	}
	while(n>0 && c<M[2]){
		n--;
		c++;	
	}	
	cout<<a<<" "<<b<<" "<<c<<endl;
}
