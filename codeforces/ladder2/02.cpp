#include<bits/stdc++.h>
using namespace std;

int main(){
  int pi,pj;
  vector <int> b(5);
  vector <vector <int> > a(5,b);
  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        cin>>a[i][j];
        if(a[i][j] == 1){
          pi = i;
          pj = j;
        }
    }
  }
  int steps = abs(pi-2)+ abs(pj-2);
  cout<<steps<<endl;
}
