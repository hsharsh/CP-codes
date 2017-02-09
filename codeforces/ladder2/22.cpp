#include <bits/stdc++.h>
using namespace std;

#define pi 3.141592653593
#define MIN -1000000001
#define MAX 1000000001
#define EPS 0.000000001

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FORD(i,a,b) for(int i=(a);i>(b);i--)
#define pb push_back
#define vi vector<int>
#define vii vector<vector<int> >
#define vs vector<string>
#define ino ios_base::sync_with_stdio(false)

typedef long long ll;
typedef unsigned long long ull;

int main(){
	int n,count=0,flag=0;
	cin>>n;
	n+=2;	
	FOR(i,1,n){
		FORD(j,n-i-1,0)
			cout<<"  ";
		FOR(k,0,i){
			if(k==0)
				cout<<0;
			else
				cout<<" "<<k;
			flag=1;
		}
		FORD(k,i-2,-1){
				cout<<" "<<k;
		}
			cout<<endl;
	}

	FORD(i,n-1,1){
		FOR(j,i,n)
			cout<<"  ";
		FOR(k,0,i-1){
			if(k==0)
				cout<<0;
			else
				cout<<" "<<k;
		}
		FORD(k,i-3,-1){
				cout<<" "<<k;
		}
			cout<<endl;
	}
}
