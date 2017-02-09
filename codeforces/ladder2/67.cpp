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
	int n,m;
	string s;
	cin>>n>>m;

	REP(i,n){
		cin>>s;
		REP(j,m){
			if(s[j]=='.'){
				if(i%2==0){
					if(j%2==0)
						cout<<"B";
					else
						cout<<"W";
				}
				else{
					if(j%2==0)
						cout<<"W";
					else
						cout<<"B";
				}
			}
			else
				cout<<"-";
		}
		cout<<endl;
	}
}
