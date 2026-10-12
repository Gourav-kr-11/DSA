#include<iostream>
#include<climits>
using namespace std;

void swapMinmax(int arr[],int sz){
   int minindex=0,maxindex=0;
   for(int i = 1;i<sz;i++){
    if(arr[i]<arr[minindex]){
      minindex=i;
    }
    if(arr[i]>arr[maxindex]){
      maxindex=i;
    }
   }
   swap(arr[minindex],arr[maxindex]);
}

int main(){
  int arr[]={1,2,3,4,5,6};
  int sz=6;
  swapMinmax(arr,sz);
  cout<<"After swapping ";
  for(int i=0;i<sz;i++){
    cout<< arr[i]<<" ";

  }
  cout<<endl;
  return 0;

}