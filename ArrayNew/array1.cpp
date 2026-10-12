//Same type of things stored in array

#include<iostream>
using namespace std;


void printArray(int arr[], int size){
   
  cout<<"Printing the array"<<endl;
  //Printing the array

  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }

  cout<<"Printing done";

}

int main(){
  
  //declare
  int number[15]={2,7};
  int n=15;
  //print the array
  for(int i=0;i<=n-1;i++){
    cout<<number[i]<<" ";
  }

  int forth[10] = {0};
  n = 10;
  printArray(forth,10);
  

  return 0;
}
