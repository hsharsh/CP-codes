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

int main()
{
  int r,c,count=0,rn=0,cn=0;
  cin>>r>>c;
  int row[r]={0},col[c]={0};
  string arr;
  REP(i,r)
  {
    cin>>arr;
    REP(j,c)
    {
      if(arr[j]=='S')
        {
          row[i]++;
          col[j]++;
        }
    }
  }
  REP(i,r)
    if(row[i])
      rn++;
  REP(j,c)
    if(col[j])
      cn++;
  count = (r-rn)*c + (c-cn)*r -(r-rn)*(c-cn);
  cout<<count<<endl;
}
