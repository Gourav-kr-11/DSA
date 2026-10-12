#include<iostream>
using namespace std;

void print(int arr[],int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}

void swapAlter(int arr[],int size){

 for(int i=0;i<size;i+=2){
  if(i+1<size){
    swap(arr[i],arr[i+1]);
  }
 }

}


int main(){
  int arr[6]={1,2,3,4,5,6};
  int size=6;

  swapAlter(arr,size);

  print(arr, 6);
  return 0;
}