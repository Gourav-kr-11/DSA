#include<iostream>
using namespace std;

int arraySum(int arr[],int size){
  int sum=0;
  for(int i=0;i<size;i++){
    sum=sum+arr[i];
  }

  return sum;
}

int main(){
  int size;
  cout<<"Enter the size of the array: ";
  cin>>size;

  int arr[100];
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }

  cout<<"Array sum is: "<<arraySum(arr,size);
  return 0;
}