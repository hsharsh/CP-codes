#include<iostream>

using namespace std;

int main(){
  int t,k,temp;
  float n,tot;
  int num[20001]={0};
  cin>>t;
  while(t--){
    cin>>n>>k;
    for(int i=0; i<n; i++){
      cin>>temp;
      num[temp+10000]++;
    }
  int counter = 0;
  for(int i=0; counter<n-k; i++){
    if(num[i])
      while(num[i]){
      counter++;
      if(counter>=k)
        tot += i-10000;
      num[i]--;

    }
  }
  cout<<(tot/(n-2*k))<<endl;
  }
}
