#include<iostream>

using namespace std;

int main(){
  int n,t;
  int factorial[200];
  int m,rem,temp;
  cin>>t;

  while(t--) {
    factorial[0] = 1;
    cin>>n;
    rem = 0;
    m = 1;
    while(n){
      for(int i=0;i<m;i++) {
        temp = rem + factorial[i]*n;
        factorial[i] = temp%10;
        rem = temp/10;
      }
      while(rem) {
        factorial[m]=0;
        temp = rem + factorial[m]*n;
        factorial[m] = temp%10;
        rem = temp/10;
        m++;
      }
      n--;
    }
    for(int i=m-1;i>=0;i--)
      cout<<factorial[i];
    cout<<endl;
  }
}
