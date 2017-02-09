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

vi sum(5005);
vector <vi > memo(5005,vector<ll>(5005));
vector< vector<bool> > calculated(5005,vector<bool>(5005));
int m,n;

ll knapsack(ll i, ll k){

	if(i>n-m && k>0)
		return MIN;

	if(k==0)
		return 0;

	if(calculated[i][k])
		return memo[i][k];

	calculated[i][k]=true;
	memo[i][k]= max( sum[i]+knapsack(i+m,k-1) , knapsack(i+1,k) );

	return memo[i][k];
}


int main(){
	ll k,temp=0;
	cin>>n>>m>>k;
	vi array(n);

	REP(i,m){
		cin>>array[i];
		temp+=array[i];
	}
	sum[0]=temp;
	FOR(i,m,n){
		cin>>array[i];
		temp = temp+array[i]-array[i-m];
		sum[i-m+1]=temp;
	}
	cout<<knapsack(0,k)<<endl;

}
