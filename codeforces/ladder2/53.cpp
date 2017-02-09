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
	int n,num,flag=1,x=0,y=0;
	vi count(7,0);
	cin>>n;
	REP(i,n){
		cin>>num;
		count[num-1]++;
	}

	if(count[5-1]>0 || count[7-1]>0 || count[1-1]!=n/3)
		flag=0;
	if(count[3-1]>0){
		if(count[6-1]<count[3-1]){
			flag=0;
		}
		else
			count[6-1]-=count[3-1];
	}
	if(count[4-1]>0){
		if(count[2-1]<count[4-1]){
			flag=0;
		}
		else
			count[2-1]-=count[4-1];		
	}
	if(count[2-1]!=count[6-1])
		flag=0;

	if(flag==0){
		cout<<-1<<endl;
		return 0;
	}

	while(count[3-1]-->0){
		cout<<"1 3 6"<<endl;
	}
	while(count[4-1]-->0){
		cout<<"1 2 4"<<endl;
	}
	while(count[6-1]--){
		cout<<"1 2 6"<<endl;
	}



}
