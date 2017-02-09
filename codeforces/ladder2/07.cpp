#include <bits/stdc++.h>
using namespace std;


#define pi 3.141592653593
#define sf scanf("%d\n", )
#define pf printf

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FORD(i,a,b) for(int i=(a);i>(b);i--
#define pb push_back
#define vi vector<int>
#define vii vector<vector<int> >
#define vs vector<string>

typedef long long ll;
typedef unsigned long long ull;


int main(){
  int ans;
  string a,b;
  cin>>a>>b;
  REP(i,a.size())
    a[i] = toupper(a[i]);
  REP(i,b.size())
    b[i] = toupper(b[i]);
  if(a<b)
    ans = -1;
  else if(a>b)
    ans = 1;
  else
    ans = 0;
  cout<<ans<<endl;
}
