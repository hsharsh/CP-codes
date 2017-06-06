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

ll lowerbound(vector<ll> array, ll n, ll element){
	ll beg = -1, end = n;
	while(beg + 1 < end){
		ll mid = (beg + end) >> 1;
		if(array[mid] < element)
			beg = mid;
		else
			end = mid;
	}
	return end;
}

ll upperbound(vector<ll> array, ll n, ll element){
	ll beg = 0, end = n;
	while(beg + 1 < end){
		ll mid = (beg + end) >> 1;
		if(array[mid] > element)
			end = mid;
		else
			beg = mid;
	}
	return end;
}

int main(){
/*	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);	*/
	int n;
	cin>>n;
	vi a(n);
	REP(i,n)
		cin>>a[i];
	vl lhs(n*n*n);

	int it=0;
	REP(i,n){
		REP(j,n){
			REP(k,n){
				lhs[it] = a[i]*a[j]+a[k];
				it++;
			}
		}
	}
	sort(all(lhs));
	ll sum=0;
	REP(i,n){
		REP(j,n){
			REP(k,n){	
				if(a[i] != 0){
					ll rhs = a[i]*(a[j]+a[k]);
					sum += (upper_bound(lhs.begin(),lhs.end(),rhs) - lower_bound(lhs.begin(),lhs.end(),rhs)); 
				}
			}
		}
	}
	cout<<sum<<endl;
}
