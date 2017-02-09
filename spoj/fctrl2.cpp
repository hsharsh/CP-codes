#include <bits/stdc++.h>
using namespace std;

#define pi 3.141592653593
#define MIN -1000000001
#define MAX 1000000001
#define EPS 0.000000001

#define cns ios_base::sync_with_stdio(false)
#define DEBUG(x) cout << '>' << #x << ':' << x << endl
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
#define DFOR(i,a,b) for(ll i=(a);i>(b);i--)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define vi vector<ll>
#define vii vector<vector<ll> >
#define ii pair<ll,ll>
#define F first
#define S second
#define vs vector<string>
#define ll long long
#define ull unsigned long long

int main(){
  int n,t;
  vi factorial(200,1);
  int size, rem, temp,m;
  cin>>t;
  while(t--){
    factorial[0]=1;
    cin>>n;
    rem = 0;
    m=1;
    while(n){
      REP(i,m){
        temp = rem+(factorial[i]*n);
        factorial[i]=temp%10;
        rem=temp/10;
      }
      while(rem){
        factorial[m]=0;
        temp = rem+(factorial[m]*n);
        factorial[m]=temp%10;
        rem = temp/10;
        m++;
      }
      n--;
    }
    DFOR(i,m-1,-1)
      cout<<factorial[i];

    cout<<endl;
  }
}