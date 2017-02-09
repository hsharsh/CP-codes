#include<stdio.h>
#include<math.h>

int main(){
  int t;
  t=0;
  int flag;
  long long int a,b,count,in,i;
  a = b = 0;

  scanf("%d",&t);
  while(t--){
    count = in = flag = 0;

    scanf("%lld %lld",&a,&b);
    for(i=a;i<=b;i++){
      if((int) (sqrt(i))==sqrt(i)){
        flag=1;

        in=sqrt(i);
        break;
      }
    }
    if(flag){
      for(i=in;(i*i)<=b;i++)
        count++;
    }
    printf("%lld\n",count );
  }
}
