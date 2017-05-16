/*****************************************************************************************
You should enjoy the little detours...
Becase that's where you'll find the things
more important than what you want...

Version	:	1.5
Author	:	Harshwardhan Praveen
*****************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define pi 			3.141592653593
#define MOD         1000000007
#define EPS 		0.000000001

#define cns 		ios_base::sync_with_stdio(false)
#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl
#define REP(i,n) 	for(ll i=0;i<(n);i++)
#define FOR(i,a,b) 	for(ll i=(a);i<(b);i++)
#define DFOR(i,a,b) for(ll i=(a);i>(b);i--)
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
#define pii 		pair<int,int>
#define pll			pair<ll,ll>
#define F 			first
#define S 			second
#define ll 			long long
#define ull 		unsigned long long

ll power_modulo(ll base, ll exp, ll mod){
	ll result = 1;
	base %= mod;
	while(exp > 0){
		if(exp%2 == 1)
			result = (result*base) % mod;
		exp = exp>>1;
		base = (base*base) % mod;
	}
	return result;
}

int main(){
	int n,m;
	cin>>n;
	vector<pair<int,int> > pos[3];
	vi p(n);
	REP(i,n){
		cin>>p[i];
	}
	REP(I,2){
		REP(i,n){
			int c;
			cin>>c;
			pos[c-1].pb(mp(p[i],i));
		}
	}
	vector<pair<int,int> >::iterator it[3];
	REP(i,3){
		sort(all(pos[i]));
		it[i] = pos[i].begin();
	}

	vb sold(n,false);
	cin>>m;
	REP(i,m){
		int c;
		cin>>c;
		bool found=false;
		int ans;
		while(it[c-1]!=pos[c-1].end()){
			if(!sold[it[c-1]->S]){
				found=true;
				ans=it[c-1]->F;
				sold[it[c-1]->S]=true;
				it[c-1]++;
				break;
			}
			else
				it[c-1]++;
		}
		if(found)
			cout<<ans<<endl;
		else
			cout<<-1<<endl;
	}
}
