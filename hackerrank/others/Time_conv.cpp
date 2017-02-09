#include<stdio.h>

int main(){
  int hh,mm,ss;
  char t[3];
  scanf("%d:%d:%d%s",&hh,&mm,&ss,t);
  if(t[0]=='P'&& hh!=12)
      hh+=12;
  else if(t[0]=='A'&& hh==12)
      hh=0;

  printf("%02d:%02d:%02d",hh,mm,ss );
}
