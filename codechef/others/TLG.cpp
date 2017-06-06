#include<iostream>

using namespace std;

int main(){
  int n,a,b,ta = 0 ,tb = 0;
  int max = 0, player;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>b;
    ta += a;
    tb += b;
    if(ta>tb && (ta-tb)>max){
      max = ta-tb;
      player = 1;
    }
    else if ((tb-ta)> max){
      max = tb-ta;
      player = 2;
    }
  }
  cout<<player<<" "<<max<<endl;
}
