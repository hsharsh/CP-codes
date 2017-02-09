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
	int n,r=0,b=0,x,y,steps;
	cin>>n;
	string a;
	cin>>a;
	REP(i,n){
		if(i%2 == 0){
			if(a[i]=='r')
				b++;
		}
		else if(a[i]=='b')
			r++;
	}

	x=max(r,b);
	r=b=0;

	REP(i,n){
		if(i%2 == 0){
			if(a[i]=='b')
				r++;
		}
		else if(a[i]=='r')
			b++;
	}

	y=max(r,b);
	steps = min(x,y);
	cout<<steps<<endl;
}
