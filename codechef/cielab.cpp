#include<iostream>

using namespace std;

void main(){
  int a,b;
  cin>>a>>b;
  result = a-b;
  digit = result%10;
  result /= 10;
  result *= 10;
  if(digit != (a%10))
    result += a%10;
  else
    result += b%10;
  cout<<result;
}
