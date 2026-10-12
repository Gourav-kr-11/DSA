#include<iostream>
using namespace std;
void printArray(int arr[], int size){
   
  cout<<"Printing the array"<<endl;
  //Printing the array

  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }

  cout<<"Printing done"<<endl;

}
int main(){
  int fifth[10]={1};

  int n=10;
  printArray(fifth,10);

  
  int fifthSize=sizeof(fifth)/sizeof(int);
  cout<<"Size of fifth is: "<<fifthSize<<endl;

  return 0;
}