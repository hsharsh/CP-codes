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
	ll n, length = 1, temp;
	cin>>n;
	vi factorial(1000,0);
	factorial[0]=1;
	while(n){
		temp = 0;
		REP(i,length){
			temp += factorial[i]*n;
			factorial[i] = temp % 10;
			temp = temp/10;
		}
		while(temp>0){
			factorial[length] = temp % 10;
			temp/=10;
			length++;
		}
		n--;
	}
	DFOR(i,length-1,-1)
		cout<<factorial[i];
	cout<<endl;
}
