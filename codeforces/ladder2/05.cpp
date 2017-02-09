#include<bits/stdc++.h>
using namespace std;

int main(){
  string p;
  int flag = 0;
  cin>>p;
  for(int i=0; i<p.size(); i++){
    if(p[i]=='H'||p[i]=='Q'||p[i]=='9'){
      cout<<"YES";
      flag = 1;
      break;
    }
  }
  if(!flag)
    cout<<"NO";
  cout<<endl;
}
