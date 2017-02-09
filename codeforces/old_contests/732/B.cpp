#include <bits/stdc++.h>
using namespace std;

#define pi 3.141592653593
#define MIN -1000000001
#define MAX 1000000001
#define EPS 0.000000001

#define ino ios_base::sync_with_stdio(false)
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

int main(){
	int n,k,total=0,x;
	cin>>n>>k;
	vi num(n);
	cin>>num[0];
	if(n==1){
		if(num[0]>=k)
			cout<<0<<endl<<num[0];
		else
			cout<<k-num[0]<<endl<<k<<endl;
		return 0;
	}
	vi sum(n-1);
	FOR(i,1,n){
		cin>>num[i];
		sum[i-1]=k-(num[i]+num[i-1]);
		if(sum[i-1]<0)
			sum[i-1]=0;
	}

	FOR(i,1,n-1){
		x=min(sum[i],sum[i-1]);
		total+=x;
		num[i]+=x;
		sum[i-1]-=x;
		sum[i]-=x;
	}

	REP(i,n-1){
		if(sum[i]>0){
			total+=sum[i];
			num[i]+=sum[i];
		}
	}
	cout<<total<<endl;
	REP(i,n)
		cout<<num[i]<<" ";
}
