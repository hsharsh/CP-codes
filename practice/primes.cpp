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
#define rall(v) v.begin(),v.end(),greater<int>()
#define vi vector<ll>
#define vii vector<vector<ll> >
#define ii pair<ll,ll>
#define F first
#define S second
#define vs vector<string>
#define ll long long
#define ull unsigned long long

vector <int> primes;

vector <int> seive(){
	bool array[32000];
	for(int i=2; i*i<32000; i++){
		if(!array[i]){
			for(int j=i*i; j<32000; j+=i){
				array[j]=true;
			}
		}
	}
	for(int i=2; i<32000; i++){
		if(!array[i]){
			primes.pb(i);
		}
	}
	return primes;
}

ll sum(ll num){
	ll s=0;
	while(num>0){
		s+=num%10;
		num/=10;
	}
	DEBUG(s);
	return s;
}
int main(){
	ll total=0,a,b;
	bool flag;
	vector <int> ::iterator p;
	primes = seive();

	for(p=primes.begin(); p!=primes.end(); p++){
		total+=*p;
	}

	FOR(i,32000,100000){
		flag = false;
		DEBUG(i);
		for(p=primes.begin(); p!=primes.end() && *p <= i; p++){
			DEBUG(*p);
			if(i % *p == 0){
				flag =true;
				break;
			}
		}
		if(!flag)
			total+=sum(i);
		DEBUG(total);
	}
	cout<<total<<endl;
}
