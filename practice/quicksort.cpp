#include<iostream>
using namespace std;

int Partition(int *a, int start, int end){
  int partitionIndex = start;
  int pivot = a[end];
  for(int i = start; i<end; i++){
    if(a[i]<=pivot){
      swap(a[i],a[partitionIndex]);
      partitionIndex++;
    }
  }
  swap(a[partitionIndex],a[end]);
  return partitionIndex;
}

void Quicksort(int *a,int start, int end){
  if(start<end){
    int partitionIndex = Partition(a,start,end);
    Quicksort(a,start,partitionIndex-1);
    Quicksort(a,partitionIndex+1,end);
  }
}
int main(){
/*  int length;
  cin>>length;
  int array[length];
  for(int i=0 ; i<length ; i++)
    cin>>array[i];
*/
  int array[] = {7,2,1,6};
  Quicksort(array,0,3);
  for(int i=0; i<4; i++)
    cout<<array[i]<<"-";

}
