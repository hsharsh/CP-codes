#include<iostream>

using namespace std;

int main(){
    int n,small,count,flag;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];

    flag=1;
    while(flag){

      count=small=0;
      for(int i=0;i<n;i++)
        if(arr[i]>0){
          small=arr[i];
          break;
        }

      for(int i=0;i<n;i++)
        if(arr[i]>0)
          if(small>arr[i])
            small=arr[i];


    for(int i=0;i<n;i++){
      if(arr[i]){
        arr[i]-=small;
        count++;
      }
      if(arr[i]<0)
        arr[i]=0;
    }
    cout<<count<<endl;

    count=0;
    for(int i=0;i<n;i++){
      if(arr[i]==0)
        count++;
    }

    if(count==n)
      break;
  }
}
