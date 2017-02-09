#include<iostream>

using namespace std;

int main(){
  int n,k,p,count,start,end,t;
  cin>>n>>k;
  p=count=0;
  for(int i=0;i<n;i++){
    cin>>t;
    for(int j=0;t>0;j++){
      start=j*k;
      if(t>k)
        end=start+k-1;
      else{
        end=start+t-1;
      }
      t-=k;
      if(p>=start && p<=end){
        count++;
      }
      p++;
  }
  }
  cout<<count<<endl;
}
