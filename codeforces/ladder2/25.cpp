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

bool func(int i, int j){
  return (i>j);
}

int main(){
	int n,m,num,sum=0;
	cin>>n>>m;
	vi a(n);
	int j=0;
	REP(i,n){
		cin>>num;
		if(num<0){
			a[j]=(-1)*num;
			j++;
		}	
	}
	sort(a.begin(),a.end(),func);
	REP(i,m)
		sum+=a[i];
	cout<<sum<<endl;
}
