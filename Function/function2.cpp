#include<iostream>
using namespace std;

//if even->1
//if odd->0

bool isEven(int a){
  if(a&1){
    return 0;
  }
  return 1;
}

int main(){
  int num;
  cin>>num;
  
  if(isEven(num)){
    cout<<"Number is Even";
  }
  else{
    cout<<"Number is odd";
  }


  return 0;
}