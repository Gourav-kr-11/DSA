#include<iostream>
using namespace std;
int prime(int n){
 bool isPrime= true;
 for(int i=2;i<n;i++){
 if(n%i==0){
  isPrime=false;
  return false;
 }
 if(isPrime==true){
  return true;
 }

 }}
 int main(){
  int n;
  cout<<"Enter the value of n";
  cin>>n;
  for(int i =2;i<=n;i++){
    if(prime(i)){
      cout<<i<<" ";
    }
  }
 
  }

 