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
	int n,h1=0,h2=0,num,flag=1;
	cin>>n;
	REP(i,n){
		cin>>num;
		if(num==100)
			h1++;
		else
			h2++;
	}

	if(h1%2==1)
		flag=0;
	else{
		if(h2%2==1){
			if(h1<2)
				flag=0;
		}
	}
	if(flag)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
