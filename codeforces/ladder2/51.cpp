#include <bits/stdc++.h>
using namespace std;

#define pi 3.141592653593
#define MIN -1000000001
#define MAX 1000000001
#define EPS 0.000000001

#define ino ios_base::sync_with_stdio(false)
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>(b);i--)
#define pb push_back
#define mp make_pair
#define vi vector<ll>
#define vii vector<vector<ll> >
#define ii pair<ll,ll>
#define F first
#define S second
#define vs vector<string>
#define ll long long
#define ull unsigned long long

int main(){
	int n,m,count=0,eats=0;
	cin>>n>>m;
	vs pigs(n);
	REP(i,n){
		cin>>pigs[i];
	}
	REP(j,n){
		REP(k,m){
			if(pigs[j][k]=='W'){
				count=0;
				if(j-1>=0){
					if(pigs[j-1][k]=='P')
						count++;
				}
				if(k-1>=0){
					if(pigs[j][k-1]=='P')
						count++;
				}
				if(j+1<n){
					if(pigs[j+1][k]=='P')
						count++;
				}
				if(k+1<m){
					if(pigs[j][k+1]=='P')
						count++;
				}
				if(count>0)
					eats++;
			}
		}
	}
	cout<<eats<<endl;
}
