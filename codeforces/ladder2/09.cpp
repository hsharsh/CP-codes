#include <bits/stdc++.h>
using namespace std;

#define pi 3.141592653593

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
  int n,i,j;
  cin>>n;
  int p=n/2, start=1, end=(n*n);
  REP(i,n){
    REP(i,p)
      cout<<start++<<" ";
    REP(i,p)
      cout<<end--<<" ";
    cout<<endl;
  }
}
