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
#define DFOR(i,a,b) for(ll i=(a);i>(b);i--)
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
	ll n,m,l,temp,zero=0,c=0;
	cin>>n>>m;
	vi connected(m,-1);
	REP(i,n){
		cin>>l;
		if(l==0){
			zero++;
			continue;
		}
		vi t(l,-1);
		ll low = m+1;
		REP(j,l){
			cin>>t[j];
			if(connected[t[j]-1]!=-1){
				low=min(low,connected[t[j]-1]);
			}
		}

		
		if(low==m+1){
			REP(j,l)
				connected[t[j]-1]=c;
			c++;
		}
		else{		
			REP(j,l){
				if(connected[t[j]-1]==-1)
					connected[t[j]-1]=low;
				else{
					if(connected[t[j]-1]!=low){
						int x=connected[t[j]-1];
						REP(k,m){
							if(connected[k]==x)
								connected[k]=low;
						}
					}
				}
			}
		}
	}
	if(zero==n){
		cout<<zero<<endl;
		return 0;
	}
	set <ll> s;
	REP(i,m){
		if(connected[i]!=-1)
			s.insert(connected[i]);
	}
	cout<<s.size() - 1 + zero<<endl;
}
