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
#define FS(i,v) 	for(ll i:v)
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


vi adj[2000],teams[50];
bool visited[2000];
int counter=0;

int dfs(int s) {
    visited[s] = true;
    teams[counter].pb(s);
    for(int i = 0;i < adj[s].size();++i)    {
     if(visited[adj[s][i]] == false)
        dfs(adj[s][i]);
    }
}

void initialize() {
    for(int i = 0;i < 10;++i)
     visited[i] = false;
}

int main() {
	int n, m, x, y;
	cin>>n>>m;
	if(m==0){
		for(int i=1;i<n+1;i+=3){
			cout<<i<<" "<<i+1<<" "<<i+2<<endl;
		}
		return 0;
	}
	ll val;
	REP(i,m){
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	initialize();
    
	FOR(i,1,n+1){
		if(visited[i] == false){
        	dfs(i);
        	counter++;
        }
    }
    bool flag=true;
    vi ts[4];

    REP(i,n+1){
    	if(teams[i].size()>3){
    		flag=false;
    		break;
    	}

    	if(teams[i].size())
    		ts[teams[i].size()].pb(i);
    }


    if(ts[2].size()>ts[1].size()){
    	flag=false;
    }
    int display = 0;
    if(flag){
    	REP(i,n+1){

    		if(ts[teams[i].size()].size()==0)
    			continue;
			/*
			FOR(j,1,4){
				cout<<"Size:"<<j<<endl;
				FS(elem,ts[j])
					cout<<elem<<" ";
				cout<<endl;
			}
			*/
    		if(teams[i].size()==3){
    			ts[3].erase(find(all(ts[3]),i)); 
	    		FS(elem,teams[i]){
	    			cout<<elem<<" ";
	    		}
	    		cout<<endl;
	    		display++;
    		}
    		if(teams[i].size()==2){
	    		ts[2].erase(find(all(ts[2]),i));    			
	    		cout<<teams[i][0]<<" "<<teams[i][1]<<" ";
	    		cout<<teams[ts[1].back()][0]<<endl;
	    		ts[1].pop_back();
	    		display++;    			
    		}
    		if(teams[i].size()==1){
    			if(ts[2].size()==0){
    				ts[1].erase(find(all(ts[1]),i));
    				cout<<teams[i][0]<<" "<<teams[ts[1].back()][0]<<" ";
    				ts[1].pop_back();
    				cout<<teams[ts[1].back()][0]<<endl;
    				ts[1].pop_back();
    			}
    			else{
		    		ts[1].erase(find(all(ts[1]),i));    			
		    		cout<<teams[i][0]<<" ";
		    		cout<<teams[ts[2].back()][0]<<" "<<teams[ts[2].back()][1]<<endl;
		    		ts[2].pop_back();        				
    			}
    			display++;
    		}
    		if(display==n/3)
    			break;
    	}
    }
    else
    	cout<<-1<<endl;
}