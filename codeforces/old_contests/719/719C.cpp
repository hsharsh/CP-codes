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
  int n,t,i;
  cin>>n>>t;
  char a[n];
  cin>>a;
  
  i=0;
  while(a[i]!='.')
  	i++;
  i++;

  while((t--)){
    if(a[i]-'0'>=5){
DEBUG(a[i])
      a[i]='0';
      i--;
      while(a[i]-'0'==9){
        a[i]='0';
        i--;
      }
      if(a[i]=='.'){
        a[i-1]++;
        n=i-1;
        break;
      }
      a[i]++;
      n=i;
    }
  }

  REP(i,n)
    cout<<a[i];
  cout<<endl;
}
