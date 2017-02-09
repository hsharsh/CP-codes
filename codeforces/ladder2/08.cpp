#include <bits/stdc++.h>
using namespace std;

#define pi 3.141592653593

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FORD(i,a,b) for(int i=(a);i>(b);i--
#define pb push_back
#define vi vector<int>
#define vii vector<vector<int> >
#define vs vector<string>
#define ino ios_base::sync_with_stdio(false)

typedef long long ll;
typedef unsigned long long ull;

int main(){
  int ans = 0,n,total;
  bool codn;
  cin>>n;
  vi num(n);
  REP(i,n){
    cin>>num[i];
    total += num[i];
  }
  if(total%2)
    codn = true;
  else
    codn = false;
  if(codn)
    REP(i,n){
      if(num[i]%2 == 1)
        ans++;
    }
  else
    REP(i,n){
      if(num[i]%2 == 0)
        ans++;
    }

  cout<<ans<<endl;
}
