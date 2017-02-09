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

#define pi 			3.141592653593
#define MIN 		-1000000001
#define MAX 		1000000001
#define EPS 		0.000000001

#define cns 		ios_base::sync_with_stdio(false)
#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl
#define REP(i,n) 	for(ll i=0;i<(n);i++)
#define FV(i,v) 	for(ll i:v)
#define FOR(i,a,b) 	for(ll i=(a);i<(b);i++)
#define DFOR(i,a,b) for(ll i=(a);i>(b);i--)
#define pb 			push_back
#define mp 			make_pair
#define all(v) 		v.begin(),v.end()
#define rall(v) 	v.rbegin(),v.rend()
#define vi 			vector<int>
#define vii 		vector<vector<int> >
#define vl 			vector<ll>
#define vll 		vector<vector<ll> >
#define si 			set<ll,ll>
#define ii 			pair<ll,ll>
#define F 			first
#define S 			second
#define vs 			vector<string>
#define ll 			long long
#define ull 		unsigned long long

vi primes;

vi seive(){
	bool array[110000];
	for(int i=2; i*i<110000; i++){
		if(!array[i]){
			for(int j=i*i; j<110000; j+=i){
				array[j]=true;
			}
		}
	}
	for(int i=2; i<110000; i++){
		if(!array[i]){
			primes.pb(i);
		}
	}
	return primes;
}

int closest_prime(int num){
	int beg=0, end = primes.size()-1,mid;
	int i=0,save;
	while(true){
		if(beg>end)
			break;
		mid = (beg+end)/2;
		if(primes[mid]==num){
			save=primes[mid];
			break;
		}
		else if(primes[mid]>num){
			save=primes[mid];
			end=mid-1;
		}
		else{
			beg=mid+1;
		}
	}
	return save;
}

int main(){
	int n,m,x,mat;
	primes = seive();

	cin>>n>>m;
	vi col(m,0),row(n,0);
	REP(i,n){
		REP(j,m){
			cin>>mat;
			x = closest_prime(mat)-mat;
			col[j]+=x;
			row[i]+=x;
		}
	}
	cout<<min(*min_element(all(col)),*min_element(all(row)))<<endl;
}
