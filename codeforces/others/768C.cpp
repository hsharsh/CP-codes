/*****************************************************************************************
You should enjoy the little detours...
Because that's where you'll find the things
more important than what you want...

Version	:	1.63
Author	:	Harshwardhan Praveen
*****************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define pi 			3.141592653593
#define MOD         1000000007
#define EPS 		0.000000001

#define cns 		ios_base::sync_with_stdio(false)
#define DEBUG(x) 	cout << '>' << #x << ':' << x << endl
#define REP(i,n) 	for(ll i=0;i<(n);i++)
#define FOR(i,a,b) 	for(ll i=(a);i<(b);i++)
#define DFOR(i,a,b) for(ll i=(a);i>(b);i--)
#define pb 			push_back
#define mp 			make_pair
#define all(v) 		v.begin(),v.end()
#define rall(v) 	v.rbegin(),v.rend()
#define vi 			vector<int>
#define vl 			vector<ll>
#define vii 		vector<vector<int> >
#define vll 		vector<vector<ll> >
#define vs 			vector<string>
#define vb			vector<bool>
#define si 			set<int>
#define pii 		pair<int,int>
#define pll			pair<ll,ll>
#define F 			first
#define S 			second
#define ll 			long long
#define ull 		unsigned long long

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int n, k, x;
	cin >> n >> k >> x;
	vi freq(1024, 0), copy(1024,0);
	REP(i, n){
		int temp;
		cin >> temp;
		freq[temp]++;
	}
	copy = freq;
	REP(j, k){
		int before = 0;
		REP(i, 1024){
			if(before & 1){
				int temp_xor = i ^ x;
				copy[i] -= freq[i] / 2;
				copy[temp_xor] += freq[i] / 2; 
			}
			else{
				int temp_xor = i ^ x;
				copy[i] -= (freq[i]+1) / 2;
				copy[temp_xor] += (freq[i]+1) / 2;				
			}
			before += freq[i];
		}
		freq = copy;
	}
	int smax = INT_MIN, smin = INT_MAX;
	REP(i, 1024){
		if(freq[i]){
			smax = max((ll)smax, i);
			smin = min((ll)smin, i);
		}
	}

	cout << smax << " " << smin << endl;
}
