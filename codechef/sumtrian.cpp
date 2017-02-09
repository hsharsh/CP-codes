#include<iostream>
#include<math.h>

using namespace std;

int main(){
  int t,n,x,max,temp,num;
  cin>>t;
  while(t--){
    cin>>n;
    int a[n][n];

    for(int i =0;i<n;i++){
      for(int j=0;j<i+1;j++){
          cin>>a[i][j];
      }
    }

    max = 0;
    for(int i =0;i < pow(2,n-1)-1;i++){
      temp=x=0;
      num = i;
      for(int j=0;j<n;j++){
        temp +=a[j][x];
        x += num%2;
        num /=2;
      }
      if(temp > max)
        max = temp;
    }
    cout<<max<<endl;
  }
}
