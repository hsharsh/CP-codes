#include <bits/stdc++.h>
using namespace std;

#define pi 3.141592653593
#define MIN -1000000001
#define MAX 1000000001
#define EPS 0.000000001

#define ino ios_base::sync_with_stdio(false)
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>(b);i--)
#define pb push_back
#define mp make_pair
#define vi vector<ll>
#define vii vector<vector<ll> >
#define ii pair<ll,ll>
#define F first
#define S second
#define vs vector<string>
#define ll long long
#define ull unsigned long long

const int length =1000001;

set<long long> prime_squares(ll n){
    static bool arr[length];
    for (ll i = 2; i*i < n; i++){
        if (!arr[i]){
            for (ll j = i*i; j < n; j += i){
                arr[j] = true;
            }
        }
    }

    set<long long> res;
    for (ll i = 2; i < n; i++){
        if (!arr[i])
            res.insert((long long)i*i);
    }
    return res;
}

int main(){
	ino;
	cin.tie(NULL);
	ll n,num;
	set <ll> list(prime_squares(1000001));
	cin>>n;
	REP(i,n){
		cin>>num;
		if(list.find(num)==list.end())
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
}
