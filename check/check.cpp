#include<iostream>
 using namespace std;
 int main(){

  for(int i=0;i<=15;i+=2){
    cout<<i<<" ";

  //The result is 1 ONLy if both bits are 1 and 1 represent true
    if(i&1){
      continue;
    }
    i++;
  }
 }