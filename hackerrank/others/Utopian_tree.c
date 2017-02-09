#include<stdio.h>

int main(){
  int t,n,f,h;
  t=n=0;
  scanf("%d",&t);
  while(t--){
      h=1;
      scanf("%d",&n);
      f=1;
      while(n){
        if(f--)
          h*=2;
        else{
          h++;
          f=1;
        }
        n--;
      }
      printf("%d\n",h);
  }
}
