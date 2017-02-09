#include<stdio.h>
#include<math.h>


int main(){
  long long int n,t,count,i;
  scanf("%lld",&t);

  while(t--) {
    scanf("%lld",&n);
    i=1;
    count = 0;
    while(i++){
      if(n/pow(5,i) == 0)
        break;
      printf("%lld\n",(long long int) n/pow(5,i));
      count += (long long int)(n/pow(5,i));
    }
    printf("%lld\n",count);
  }
}
