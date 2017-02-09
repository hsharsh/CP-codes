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
	string s,t;
	int flag=1,count=0;
	vi index;
	cin>>s>>t;
	if(s.size()!=t.size())
		flag=0;
	REP(i,s.size()){
		if(s[i]!=t[i]){
			count++;
			index.pb(i);
		}
		if(count>2){
			flag=0;
			break;
		}
	}
	if(count==1)
		flag=0;
	if(count==2){
		if((s[index[0]]!=t[index[1]])||((s[index[1]]!=t[index[0]]))){
			flag=0;
		}
	}
	if(flag)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
