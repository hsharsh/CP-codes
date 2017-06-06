#include<iostream>
#include<stdio.h>

#define size 60000
using namespace std;

int main() {
  long long int n,num,arr[1000001] = {0};
  char buffer[size];
  int c,j;
    cin>>n;
    while(n) {

      c = fread(buffer, 1, size, stdin);
      for(j=0;j<c;j++) {
        if(buffer[j] == '\n') {
          arr[num]++;
          n--;
        } else {
          num = num*10 + (buffer[j] - '0');
        }
      }
    }

    for(int i = 0;i<1000001;i++) {
      while(arr[i]) {
        cout<<i<<endl;
        arr[i]--;
      }
    }
}
