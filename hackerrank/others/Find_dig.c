#include<stdio.h>

int main(){
  int t,n;
  t=n=0;
  int num,m,count;
  num=m=0;
  scanf("%d",&t);
  while(t--){
    count=0;
    scanf("%d",&n);
      num=n;
      while(num){
        m=num%10;
        if(!m);
        else if(n%m==0)
          count++;
        num/=10;
      }
    printf("%d\n",count);
  }
}
