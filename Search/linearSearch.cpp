#include<iostream>
using namespace std;


bool search(int arr[],int size,int key){
   for(int i = 0;i<size;i++ ){
    if(arr[i]==key){
      return true;
    }
   }
   return false;
}


int main(){
  int arr[10]={2,-3,6,7,5,1,0,9,45,23};

  int key;
  cout<<"Enter the key element: ";
  cin>>key;

  bool found=search(arr,10,key);

  if(found){
    cout<<"Key is found"<<endl;
  }
  else{
    cout<<"Key is not found"<<endl;
  }
  return 0;
}