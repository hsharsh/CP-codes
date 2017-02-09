#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int num = n-10;
  if((0 < num && num < 10)|| num == 11)
    cout<<4;
  else if(num == 10)
    cout<<15;
  else
    cout<<0;
  cout<<endl;
}
