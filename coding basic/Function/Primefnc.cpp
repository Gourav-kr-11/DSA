#include<iostream>
using namespace std;
int prime(int num){
 bool isPrime= true;
 for(int i=2;i<num;i++){
  if(num%i==0){
    isPrime=false;
    break;}}
  if(isPrime==true){
    return true;
  }
  else{
    return false;}

 }
 int main(){
  int n;
  cout<<"Enter the value of n";
  cin>>n;
  if(prime(n)==true){
    cout<<"The number is prime";
  }
  else{
    cout<<"The number is not prime";
  }
 }
