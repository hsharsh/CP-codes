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
	float a,b,c,d;
	int num,den;
	cin>>a>>b>>c>>d;
	if((b/a) < (d/c)){
		num = (int) (a*d - b*c);
		den = (int) (a*d);
	}

	else if((b/a) > (d/c)){
		num = (int) (b*c - a*d);
		den = (int) (b*c);
	}
	else{
		num=0;
		den=1;
	}

	FOR(i,2,num+1){
		while(num%i==0 && den%i==0){
			num/=i;
			den/=i;
		}
	}
	cout<<num<<"/"<<den<<endl;
}
