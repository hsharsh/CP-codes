#include<iostream>

using namespace std;

int main(){
  int t;
  int n,c,m,count,inc,w;

  cin>>t;
  while(t--){
    cin>>n>>c>>m;
    count=n/c;
    w=count;
    while(w>=m){
      inc=w/m;
      count+=inc;
      w=w%m;
      w+=inc;
    }
    cout<<count<<endl;
  }
}
