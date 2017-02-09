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
  int n,cr=-1,cb=-1,count=0;
  cin>>n;
  string a;
  cin>>a;
  int i=0;
  while(i<n){
    if(a[i]=='r'){
      if(cb==2){
        count++;
        i++;
      }
      else if(cb>2)
        count+=cb/2;
      cb=0;
      cr=0;
      while(a[i]=='r'){
        cr++;
        i++;
      }
      if(i==n){
        if(cr==2)
          count++;
        else if(cr>2)
          count+=cr/2;
      }
    }
    else if(a[i]=='b'){
      if(cr==2){
        count++;
        i++;
      }
      else if(cr>2)
        count+=cr/2;
      cb=0;
      cr=0;
      while(a[i]=='b'){
        cb++;
        i++;
      }
      if(i==n){
        if(cb==2)
          count++;
        else if(cb>2)
          count+=cb/2;
      }
    }
  }
  cout<<count<<endl;
}
