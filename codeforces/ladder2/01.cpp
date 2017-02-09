#include<bits/stdc++.h>
using namespace std;

bool func(int i, int j){
  return (i>j);
}

int main(){
  int n ,i ,steps;
  cin>>n;
  vector <int> a(n),b(n);
  for(i=0; i<n; i++)
    cin>>a[i];
  b = a;
  sort(a.begin(),a.end(),func);
  for(i=0; b[i]!=a[0]; i++);
  int c = i;
  for(i=n-1 ; b[i]!=a[n-1]; i--);
  int d = i;
  steps = c+abs(d-n+1);
  if(c > d)
    steps--;
  cout<<steps<<endl;
}
