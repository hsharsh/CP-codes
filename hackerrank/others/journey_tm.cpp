/*****************************************************************************************
This one moment when you know you're not a sad story,
you are alive.
And you stand up and see the lights on buildings
and everything that makes you wonder,
when you were listening to that song
on that drive with the people you love most in this world.
And in this moment, I swear, we are infinite.

Version	:	1.5
Author	:	Harshwardhan Praveen
*****************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define pi 			3.141592653593
#define MIN 		-1000000001
#define MAX 		1000000001
#define EPS 		0.000000001

#define cns 		ios_base::sync_with_stdio(false)
#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl
#define REP(i,n) 	for(ll i=0;i<(n);i++)
#define FV(i,v) 	for(ll i:v)
#define FOR(i,a,b) 	for(ll i=(a);i<(b);i++)
#define DFOR(i,a,b) for(ll i=(a);i>(b);i--)
#define pb 			push_back
#define mp 			make_pair
#define all(v) 		v.begin(),v.end()
#define rall(v) 	v.rbegin(),v.rend()
#define vi 			vector<int>
#define vii 		vector<vector<int> >
#define vl 			vector<ll>
#define vll 		vector<vector<ll> >
#define si 			set<ll,ll>
#define ii 			pair<ll,ll>
#define F 			first
#define S 			second
#define vs 			vector<string>
#define ll 			long long
#define ull 		unsigned long long

ll power_modulo(ll base, ll exp,ll mod){
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


vi adj[100010];
bool visited[100010];
int num;

int dfs(int s) {
    visited[s] = true;
    num++;
    for(int i = 0;i < adj[s].size();++i)    {
     if(visited[adj[s][i]] == false)
        dfs(adj[s][i]);
    }
    return num;
}

void initialize() {
    for(int i = 0;i < 10;++i)
     visited[i] = false;
}

int main() {
	int N, I, x, y;
	cin>>N>>I;
	ll count=0,answer=0,val;
	REP(i,I){
		cin >> x >> y;
		adj[x+1].push_back(y+1);
		adj[y+1].push_back(x+1);
	}

	initialize();
    
	FOR(i,1,N+1){
		if(visited[i] == false){
        	num=0;
        	val=dfs(i);
        	answer += count*val;
        	count+=val;
        }
    }

    cout<<answer<<endl;
}