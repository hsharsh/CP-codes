/*****************************************************************************************
This one moment when you know you're not a sad story,
you are alive.
And you stand up and see the lights on buildings
and everything that makes you wonder,
when you were listening to that song
on that drive with the people you love most in this world.
And in this moment, I swear, we are infinite.

Version	:	1.5
Author	:	Harshwardhan Praveen
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
#define FV(i,v) for(ll i:v)
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
#define DFOR(i,a,b) for(ll i=(a);i>(b);i--)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define vi vector<ll>
#define vii vector<vector<ll> >
#define si set<ll,ll>
#define ii pair<ll,ll>
#define F first
#define S second
#define vs vector<string>
#define ll long long
#define ull unsigned long long

char fib(ll n){
	switch(n%7){
		case 0: return 'Y';
		case 1: return 'Y';
		case 2: return 'X';
		case 3: return 'Y';
		case 4: return 'X';
		case 5: return 'X';
		case 6: return 'Y';
	}
	return 'X';
}


int main(){
	ll n;
	cin>>n;
	char mat0[n+1][n+1],mat90[n+1][n+1],mat180[n+1][n+1],mat270[n+1][n+1];
	FOR(i,1,n+1){
		FOR(j,1,n+1){
			mat0[i][j]= fib(i*i*j*j);
			mat90[i][j]= fib((n-j+1)*(n-j+1)*(i)*(i));
			mat180[i][j]= fib((n-j+1)*(n-j+1)*(n-i+1)*(n-i+1));
			mat270[i][j]= fib(j*j*(n-i+1)*(n-i+1));
		}
	}
		
	ll total[4];
	total[0]=total[1]=total[2]=total[3]=0;
	FOR(i,1,n+1){
		FOR(j,1,n+1){
			total[0]++;
			if(mat0[i][j]==mat90[i][j])
				total[1]++;
			if(mat0[i][j]==mat180[i][j])
				total[2]++;
			if(mat0[i][j]==mat270[i][j])
				total[3]++;				
		}
	}	

	ll q,angle;
	cin>>q;
	REP(i,q){
		cin>>angle;
		if(angle%360==0)
			cout<<n*n-total[0]<<endl;
		else if(angle%360==90)
			cout<<n*n-total[1]<<endl;
		else if(angle%360==180)
			cout<<n*n-total[2]<<endl;
		else if(angle%360==270)
			cout<<n*n-total[3]<<endl;
	}
}
