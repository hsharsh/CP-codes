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
	int a,b,c;
	vi sol;
	cin>>a>>b>>c;
	REP(i,81){
		int x = b*(pow(i,a)) + c;
		int sum=0,temp=x;
		while(x>0){
			sum+=x%10;
			x/=10;
		}
		if(sum==i && temp>0 && temp<1000000000)
			sol.pb(temp);
			
	}
	cout<<sol.size()<<endl;
	REP(i,sol.size()){
		cout<<sol[i]<<" ";
		if(i==sol.size()-1)
			cout<<endl;
	}
}
