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
	int n,increment=0,save,Max,posi=0,posj=0,count=0;
	cin>>n;
	vi bits(n);
	REP(i,n){
		cin>>bits[i];
		if(!bits[i])
			increment++;
		else{
			increment--;
			count++;
		}
	}
	if(count==n){
		cout<<n-1<<endl;
		return 0;
	}
	Max=increment;
	posi=0;
	posj=n-1;
	REP(i,n){
		save=increment;
		if(increment>Max){
			Max=max(increment,Max);
			posi=i;
			posj=n-1;
		}
		DFOR(j,n-1,i-1){
			if(!bits[j])
				increment--;
			else
				increment++;
			if(increment>Max){
				Max=max(increment,Max);
				posi=i;
				posj=j-1;
			}
		}
		if(!bits[i])
			increment=--save;
		else
			increment=++save;
	}
	increment=0;
	REP(i,posi){
		if(bits[i])
			increment++;
	}
	FOR(i,posi,posj+1){
		if(!bits[i])
			increment++;
	}
	FOR(i,posj+1,n){
		if(bits[i])
			increment++;
	}
	cout<<increment<<endl;
}
