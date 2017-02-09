#include <bits/stdc++.h>
using namespace std;


#define pi 3.141592653593
#define sf scanf
#define pf printf

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FORD(i,a,b) for(int i=(a);i>(b);i--
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;
typedef string st;
typedef vector<int> vi;
typedef vector<st> vs;

int main(){
  int n, max=-1, min=20000,count=-2;
  cin>>n;
  vi a(n);
  REP(i,n){
    cin>>a[i];
    if(a[i]>max){
      max=a[i];
      count++;
    }
    if(a[i]<min){
      min=a[i];
      count++;
    }
  }
  cout<<count<<endl;
}
