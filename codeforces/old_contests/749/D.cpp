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

/***********************
INCOMPLETE INCOMPLETE INCOMPLETE
***********************/

int main(){
	ll n,p,b;
	cin>>n;
	vi bid[210000];
	set <ii > maxbid;	
	FOR(i,1,n+1){
		cin>>p>>b;
		bid[p].pb(b);
	}
	FOR(i,1,n+1){
		if(bid[i].size())
			maxbid.insert(mp(bid[i].back(),i));
	}

	ll q,k,sm;
	set<ii>::iterator it;
	cin>>q;
	while(q--){
		cin>>k;
		vector<ii > save;
		while(k--){
			cin>>p;
			if(bid[p].size()){
				it = maxbid.find(mp(bid[p].back(),p));
				save.pb(*it);
				maxbid.erase(it);
			}
		}

		if(maxbid.size()==0){
			cout<<"0 0"<<endl;
		}
		else if(maxbid.size()==1){
			it = --maxbid.end();
			cout<<it->S<<" "<<bid[it->S][0]<<endl;
		}
		else{
			it = --(--maxbid.end());
			sm = bid[it->S].back();
			++it;
			cout<<it->S<<" "<<*upper_bound(bid[it->S].begin(), bid[it->S].end(), sm)<<endl;
		}

		for(ii elem:save){
			maxbid.insert(elem);
		}
	}
}
	