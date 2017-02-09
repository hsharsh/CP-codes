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
	int a,b,steps=0,number;
	cin>>a>>b;
	number=__gcd(a,b);
	a/=number;
	b/=number;

	while(a%5==0){
		a/=5;
		steps++;
	}
	while(a%3==0){
		a/=3;
		steps++;
	}
	while(a%2==0){
		a/=2;
		steps++;
	}

	while(b%5==0){
		b/=5;
		steps++;
	}
	while(b%3==0){
		b/=3;
		steps++;
	}
	while(b%2==0){
		b/=2;
		steps++;
	}

	if(a>1 || b>1)
		cout<<-1<<endl;
	else
		cout<<steps<<endl;
}
