#include<iostream>
using namespace std;

int facto(int n){

  int fact=1;
  for(int i=1;i<=n;i++){
    fact=fact*i;
  }
  return fact;

}

int nCr(int n, int r){

  int nem=facto(n);

  int den=facto(r)*facto(n-r);

  return nem/den;
}

int main(){
  
  int n,r;
  cout<<"Enter the value of n and r"<<endl;

  cin>>n>>r;

  cout<<"Answer is :"<<nCr(n,r)<<endl;

  return 0;
}