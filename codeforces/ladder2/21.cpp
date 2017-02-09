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
	int n;
	cin>>n;
	string a;
	REP(i,n){
		cin>>a;
		if(a.size()>10)
			cout<<a[0]<<a.size()-2<<a[a.size()-1]<<endl;
		else
			cout<<a<<endl;
	}
}
