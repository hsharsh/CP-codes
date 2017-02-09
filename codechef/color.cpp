#include<iostream>

using namespace std;

int main(){
  int t;
  t=0;
  long long int n,R,G,B,max;
  cin>>t;
  for(int i=0;i<t;i++){
    R=G=B=n=0;
    cin>>n;
    char s[n];
    cin>>s;
    for(int i=0;i<n;i++){
      if(s[i] == 'R')
        R++;
      else if(s[i] == 'G')
        G++;
      else
        B++;
    }
    max = R;
    if(B > max)
      max = B;
    if(G > max)
      max = G;
    cout<<n-max<<endl;
  }
}
