#include<stdio.h>

int main(){
  int t,n,m,f;
  t=n=m=0;
  scanf("%d",&t);
  while(t--)
    {
      f=1;
      scanf("%d",&n);
      m=n;
      while(n){
        if((n%3)==0)
            if((m-n)%5==0)
            {
                f=0;
                for(int i=0;i<n;i++)
                  printf("5");
                for(int i=0;i<m-n;i++)
                  printf("3");
                break;
            }
        if(!f)
          break;
        n--;
      }

      if(f)
      {
        if(m%5 == 0)
          for(int i=0;i<m;i++)
            printf("3");
        else
          printf("-1");
      }
      printf("\n");
}
}
