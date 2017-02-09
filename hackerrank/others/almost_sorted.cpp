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
	ll n, length=0, state=0, index;
	cin>>n;
	vi array(n);
	REP(i,n)
		cin>>array[i];
	int i=0;
	while(i<n){
		if(array[i+1]<a[i]){
			while(array[i+1]<a[i]){
				i++;
				length++;
			}
			length++;
			if(length==1 && state=0){
				index = i-1;
				state = 1;
			}
			else if(length==1 && state=1){
				swap)
			}
			else if(length>1){
				state = 2;
			}
		}

		i++;
	}
}
