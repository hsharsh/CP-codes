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

vector <int> primes(200000);

vector <int> seive(){
	bool array[200000];
	for(int i=2; i*i<200000; i++){
		if(!array[i]){
			for(int j=i*i; j<200000; j+=i){
				array[j]=true;
			}
		}
	}
	int count = 0;
	for(int i=2; i<200000; i++){
		if(!array[i]){
			count++;
		}
		primes[i]=count;
	}
	return primes;
}

int main(){
	seive();
	ll g,n;
	cin>>g;
	REP(i,g){
		cin>>n;
		if(primes[n]%2==0){
			DEBUG(primes[n]);
			cout<<"Bob"<<endl;
		}
		else{
			DEBUG(primes[n]);
			cout<<"Alice"<<endl;
		}
	}

}
