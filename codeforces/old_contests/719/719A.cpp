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
  int a[n];
  REP(i,n)
    cin>>a[i];
  if(a[n-1]==15)
    cout<<"DOWN";
  else if(a[n-1]==0)
    cout<<"UP";
  else if(n==1)
      cout<<-1;
  else if(a[n-1]>a[n-2])
    cout<<"UP";
  else
    cout<<"DOWN";
  cout<<endl;
}
