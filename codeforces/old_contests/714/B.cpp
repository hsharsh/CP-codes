#include<bits/stdc++.h>
using namespace std;

int main(){
  long long n,num,a=-1,b=-1,c=-1,i;
  cin>>n;
  int flag=0;
  for(i=0; i<n; i++){
    cin>>num;
    if(num==a || num == b || num == c)
      continue;
    else if(num!=a && a ==-1){
      a=num;
    }
    else if(num!=b && b ==-1){
      b=num;
    }
    else if(num!=c && c==-1){
      c=num;
    }
    else if(num!=a && num!=b && num!=c){
      cout<<"NO"<<endl;
      flag=1;
      break;
    }
  }
  for(;i<n-1;i++)
    cin>>num;
  if(!flag){
    if(a==-1 || b==-1 || c==-1){
      cout<<"YES"<<endl;
      return 0;
    }
    vector <long long> array(3);
    array[0]=a;
    array[1]=b;
    array[2]=c;
    sort(array.begin(),array.end());
    if(array[1]-array[0] == array[2]-array[1])
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
}
