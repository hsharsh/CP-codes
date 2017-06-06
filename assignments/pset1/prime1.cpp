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
int main(){
	int t,a,b,top,start;
	scanf("%d", &t);
	primes = seive();
	set <int> list;
	while(t--){
		list.clear();
		scanf("%d %d",&a,&b);
		if(a<2)
			a=2;

		top=sqrt(b)+1;
		vector <int> ::iterator p;
		for(p=primes.begin(); p!=primes.end(); p++){
			if(*p>=top)
				break;
			if(*p>=a)
				start=2*(*p);
			else
				start=a+((*p-(a%(*p)))%(*p));
			for(int i=start; i<=b;i+=*p)
				list.insert(i);
		}
		FOR(i,a,b+1){
			if(list.count(i)==0)
				printf("%lld\n",i);
		}
		if(t)
			printf("\n");
	}
}
