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
	int n,m,increment=0,type,v,x;
	cin>>n>>m;
	vi array(n);
	REP(i,n)
		cin>>array[i];

	REP(i,m){
		cin>>type;
		if(type==1){
			cin>>v>>x;
			array[v-1]=x-increment;
		}
		else if(type==2){
			cin>>x;
			increment+=x;
		}
		else if(type==3){
			cin>>v;
			cout<<array[v-1]+increment<<endl;
		}
	}
}
