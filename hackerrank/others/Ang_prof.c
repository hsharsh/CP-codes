#include<stdio.h>

int main(){
  int t,n,k,a;
  t=n=k=a=0;
  scanf("%d",&t);
  while(t--)
    {
      j=0;
      scanf("%d %d",&n,&k);
      for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a<=0)
          k--;
      }
      if(k <= 0)
        printf("NO\n");
      else
        printf("YES\n");
}
}
