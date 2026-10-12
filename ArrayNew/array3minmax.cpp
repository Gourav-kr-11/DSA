#include<iostream>
#include <climits>
using namespace std;

int maX(int arr[],int size){

   int max=INT_MIN;
   for(int i=0;i<size;i++){

    //max predefined function : maxi=max(maxi,arr[i]), it will reduced the load of code wriiten below
    
    if(arr[i]>max){
       max=arr[i];
    }
   }
   return max;
   
}

int miN(int arr[],int size){

   int min=INT_MAX;
   for(int i=0;i<size;i++){
    if(arr[i]<min){
       min=arr[i];
    }
   }
   return min;
   
}
 
int main(){
  

  int size;
  cout<<"Enter the size of the array";
  cin>>size;
  
  int arr[100];

  for(int i=0;i<size;i++){
    cin>>arr[i];
  }

  cout<<"Max value in Array is:"<<maX(arr,size)<<endl;
  cout<<"Min value in Array is:"<<miN(arr,size)<<endl;

  return 0;
}