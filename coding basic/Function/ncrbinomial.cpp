#include<iostream>
using namespace std;
int Fact(int o){
  int fact=1;
  for(int i=o;i>=1;i--){
     fact=fact*i;
  }
  return fact;
}


int main(){
  int n;
  cout<<"Enter the value of n";
  cin>>n;
  int r;
  cout<<"Enter the value of r";
  cin>>r;
  int nCr = Fact(n)/Fact(r)*Fact(n-r);

  cout<<"The Factorial is: "<<nCr; 
  return 0;
}