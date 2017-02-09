#include<bits/stdc++.h>
using namespace std;

int main(){
  long long a,b,c,d,k;
  cin>>a>>b>>c>>d>>k;
  long long l = max(a,c);
  long long r = min(b,d);
  if((r-l)<0)
    cout<<0;
  else if(l<=k && k<=r)
    cout<<r-l;
  else
    cout<<r-l+1;
  cout<<endl;
}
