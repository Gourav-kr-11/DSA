#include<iostream>
using namespace std;

int linearSearch(int arr[], int sz,int target){
  for(int i = 0;i<sz;i++){
    if(arr[i]==target){//Found
       return i;
    }
  }
  return -1;//NOT FOUND
}


int main(){
  int arr[]={4,2,7,8,1,2,5};
  int sz = sizeof(arr);
  int target =8;

  cout<<linearSearch(arr,sz,target)<<endl;
  

  
  return 0;
}