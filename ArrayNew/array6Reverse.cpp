#include<iostream>
using namespace std;
int main(){
  int arr[6]={1,2,3,4,5,6};
  int size=6;
  int i=0;
  int j=size-1;
  while(i<j){
      //swap
      int temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
      /*
       or we can swap by = swap(arr[i],arr[j])
      */ 

      i++;
      j--;
    }

    for(int k=0;k<size;k++){
      cout<<arr[k]<<" ";
    }
  
  return 0;
}