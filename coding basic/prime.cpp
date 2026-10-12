#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number";
  cin>>n;
  bool isPrime =true;
  for(int i=2 ;i<=n-1 ;i++){
    if(n%i==0){
      isPrime = false;
      break;
    }
  }
  if(isPrime==true){
    cout<<"Number is prime";
  }
  else{
    cout<<"Number is not prime";
  }

  return 0;
}