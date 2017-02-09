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

int main(){
	int n,k,total=0;
	cin>>n>>k;
	vi array(n);
	REP(i,n){
		cin>>array[i];
		total+=array[i];
	}
	sort(all(array));
	int i=0;
	do{
		total+=(-2)*array[i];
		array[i]*=-1;
		i++;
		k--;
	}while(array[i]<=0 && (k>0) && i<n);

	if(k>0){
		sort(all(array));
		k%=2;
		if(k==1)
			total+=(-2)*array[0];
	}
	cout<<total<<endl;
}
