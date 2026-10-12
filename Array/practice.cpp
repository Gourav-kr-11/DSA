#include<iostream>
using namespace std;
int main(){
  int arr[]={10,20,30,40,50};
  int sz =sizeof(arr)/sizeof(int);
  int target =200;
  int targetindex;
  for(int i=0;i<sz;i++){
    if(arr[i]==target){
      targetindex=i;
      cout<<"The element is found at index: "<<targetindex<<endl;
    }
    else{
      continue;
      cout<<-1;
    }
  }

  
  

  return 0;
}