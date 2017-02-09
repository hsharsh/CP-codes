#include <bits/stdc++.h>
using namespace std;

#define pi 3.141592653593
#define MIN -1000000001
#define MAX 1000000001
#define EPS 0.000000001

#define cns ios_base::sync_with_stdio(false)
#define DEBUG(x) cout << '>' << #x << ':' << x << endl
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
#define DFOR(i,a,b) for(ll i=(a);i>(b);i--)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define vi vector<ll>
#define vii vector<vector<ll> >
#define ii pair<ll,ll>
#define F first
#define S second
#define vs vector<string>
#define ll long long
#define ull unsigned long long

int main(){
	int n,total=0,flag=0;
	cin>>n;
	vi perm(n);
	REP(i,n)
		cin>>perm[i];
	REP(i,n){
		if(perm[i]==i)
			total++;
		else if(perm[perm[i]]==i){
			flag=1;
		}
	}
	if(total==n){
		cout<<n<<endl;
		return 0;
	}
	if(flag)
		cout<<total+2<<endl;
	else
		cout<<total+1<<endl;
}
