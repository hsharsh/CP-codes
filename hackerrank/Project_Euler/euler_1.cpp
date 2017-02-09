#include<iostream>

using namespace std;

int main(){

  long int t = 0;
  cin>>t;
  long long int n,i,sum;
  while(t--){
    n = i = sum =0;
    cin>>n;

    i = n/3;
    if(n%3 == 0)
      i--;
    sum += (3*i*(i+1))/2;

    i = n/5;
    if(n%5 == 0)
      i--;
    sum += (5*i*(i+1))/2;

    i = n/15;
    if(n%15 == 0)
      i--;
    sum -= (15*i*(i+1))/2;

    cout<<sum<<endl;
  }
}
