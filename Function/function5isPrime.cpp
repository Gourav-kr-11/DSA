#include<iostream>
using namespace std;

bool isPrime(int n){
   for(int i=2;i<n;i++){
    if(n%i==0){
      return false;
    }
    return true;
   }

}


int main(){
  int n;
  cout<<"Enter the value of n";
  cin>>n;

  if(isPrime(n)){
    cout<<"Number is Prime";
  }
  else{
    cout<<"Number is not Prime";
  }

  return 0;
}