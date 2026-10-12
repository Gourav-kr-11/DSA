#include<iostream>
#include<climits>
using namespace std;
int main(){
  int num[]={10,23,44,2,43,-20,1,-24};
  int size=8;
  int smallest= INT_MAX;
  int smallestindex=-1;
  
  for(int i=0;i<size;i++){
    if(smallest>num[i]){
      smallest=num[i];
      smallestindex= i;
    
    }
  }
  cout<<"The smallest index is: "<<smallest;
  cout<<"The smallest index is: "<<smallestindex;

  
  return 0;
}