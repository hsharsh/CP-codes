#include<iostream>

using namespace std;

int main(){
  long long int n=1,i,flag;
  while(n){
    flag = 1;
    cin>>n;
    if(!n)
      break;
    int a[n];
    for(i=0; i<n; i++)
      cin>>a[i];
    for(i=0; i<n; i++){
      if(a[a[i]-1]!= i+1){
        flag = 0;
        cout<<"not ambigous"<<endl;
        break;
      }
    }
    if(flag)
      cout<<"ambigous"<<endl;
  }
}
