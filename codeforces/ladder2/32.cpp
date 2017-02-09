#include <bits/stdc++.h>
using namespace std;

#define pi 3.141592653593
#define MIN -1000000001
#define MAX 1000000001
#define EPS 0.000000001

#define ino ios_base::sync_with_stdio(false)
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FORD(i,a,b) for(int i=(a);i>(b);i--)
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vii vector<vector<int> >
#define ii pair<ll,ll>
#define F first
#define S second
#define vs vector<string>
#define ll long long
#define ull unsigned long long

int main(){
	int n;
	cin>>n;
	vi d(n),copy(n);
	REP(i,n){
		cin>>d[i];
	}
	copy=d;
	sort(d.begin(),d.end());
	int count=1;
	while(d[count]==d[0] && count<n)
		count++;

	if(count>1)
		cout<<"Still Rozdil"<<endl;
	else{
		REP(i,n){
			if(copy[i]==d[0]){
				cout<<i+1<<endl;
				break;
			}
		}
	}
}
