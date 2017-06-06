#include<iostream>

using namespace std;

int main(){
  int t=0;
  cin>>t;

  int n,index;
  while(t--){
    cin>>n;
    int l[n],r[n];
    for(int i=0;i<n;i++)
      cin>>l[i];
    for(int i=0;i<n;i++)
      cin>>r[i];

    int max = -1;
    for(int i=0;i<n;i++){
      if(l[i]+r[i]>max){
        max=l[i]+r[i];
        index=i+1;
      }
    }
    cout<<index<<endl;
  }
}
