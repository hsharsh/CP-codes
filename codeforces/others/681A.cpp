#include<iostream>

using namespace std;

int main(){
  int n,before,after,flag = 0;
  char name[11];
  cin>>n;
  while(n--){
    int i=0;
    do{
      cin>>name[i];
      i++;
    }while(name[i-1] != ' ' || i<10);
    cin>>before>>after;
    if(before>=2400)
      if(after>before)
        flag = 1;
        break;
  }
  if(flag)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
}
