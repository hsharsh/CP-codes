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
	int a,b,c,m;
	cin>>a>>b>>c;
	m=min(a,b);
	m=min(m,c);
	int i=0;
	if(a==m){
		while(i<m+1){
			if((b-i)==(c-m+i)){
				cout<<i<<" "<<b-i<<" "<<m-i<<endl;
				return 0;
			}
			i++;
		}
	}
	else if(b==m){
		while(i<m+1){
			if((a-i)==(c-m+i)){
				cout<<i<<" "<<m-i<<" "<<a-i<<endl;
				return 0;
			}
			i++;
		}
	}
	else{
		while(i<m+1){
			if((b-i)==(a-m+i)){
				cout<<b-i<<" "<<i<<" "<<m-i<<endl;
				return 0;
			}
			i++;
		}
	}
	cout<<"Impossible"<<endl;
}
