#include<iostream>
using namespace std;

int update(int arr[],int n){

  cout<<"Inside the update function"<<endl;
  
  //printing the array
  arr[0]=120;
  
  for(int i=0;i<3;i++){
    cout<<arr[i]<<" ";
  }cout<<endl;

  cout<<"Outside the function"<<endl;
}

int main(){
  int arr[3]={1,2,3};
  update(arr,3);

  //printing the array

  for(int i=0;i<3;i++){
    cout<<arr[i]<<" ";
  }cout<<endl;

  return 0;
}