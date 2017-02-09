#include<stdio.h>

int main(){
  long int n,t;
  int i,j,min;
  n=t=i=j=min=0;

  scanf("%ld",&n);
  scanf("%ld",&t);

  int width[n];

  for(int l=0;l<n;l++)
    scanf("%d",&width[l] );

  while(t--){
      scanf("%d %d",&i,&j );
      min = 3;
      for(int l=i;l<=j;l++){
        if(width[l]<min)
          min = width[l];
      }
      printf("%d\n",min );
    }

  }
