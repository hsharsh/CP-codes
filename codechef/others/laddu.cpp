#include<iostream>
#include<string.h>

using namespace std;

int main() {
  int t,n,l,num;
  char arr[20];
  char ori[12];
  cin>>t;
  while(t--) {
    l = 0;
    cin>>n>>ori;
    while(n--) {
      cin>>arr;
      num = 0;
      if(!strcmp(arr,"CONTEST_WON")) {
        cin>>num;
        if(num>20)
          l += 300;
        else
          l += (300 + 20 - num);
      }
      else if(!strcmp(arr,"TOP_CONTRIBUTOR")) {
        l+=300;
      }

      else if(!strcmp(arr,"BUG_FOUND")) {
        cin>>num;
        l += num;
      }

      else
        l+=50;
    }
    if(!strcmp(ori,"INDIAN")) {
      cout<<l/200<<endl;
    }
    else
      cout<<l/400<<endl;
  }
}
