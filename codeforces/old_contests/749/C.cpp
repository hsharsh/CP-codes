/*****************************************************************************************
								Author: Harshwardhan Praveen
*****************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define pi 3.141592653593
#define MIN -1000000001
#define MAX 1000000001
#define EPS 0.000000001

#define cns ios_base::sync_with_stdio(false)
#define DEBUG(x) cout << '>' << #x << ':' << x << endl
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FV(i,v) for(ll i:v)
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
#define DFOR(i,a,b) for(ll i=(a);i>(b);i--)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define vi vector<ll>
#define vii vector<vector<ll> >
#define si set<ll,ll>
#define ii pair<ll,ll>
#define F first
#define S second
#define vs vector<string>
#define ll long long
#define ull unsigned long long

int main(){
	ll n,cd=0,cr=0,td=0,tr=0;
	string s;
	cin>>n;
	cin>>s;
	REP(i,n){
		if(s[i]=='D')
			cd++;
		else
			cr++;
	}
	while(cd!=0 || cr!=0){
		if(cd==0 || cr==0)
			break;
		REP(i,n){
			if(cd==0 || cr==0)
				break;
			if(s[i]=='D'){
				if(tr==0)
					td++;
				else{
					s[i]='.';
					tr--;
					cd--;
				}
			}
			else if(s[i]=='R'){
				if(td==0)
					tr++;
				else{
					s[i]='.';
					td--;
					cr--;
				}
			}	
		}
	}
	if(cd>0)
		cout<<"D"<<endl;
	else
		cout<<"R"<<endl;
}
