#include<iostream>
using namespace std;
int Fact(int n){
  int fact=1;
  for(int i =n;i>=2;i--){
    fact=fact*i;
  }
  return fact;
}
int main(){
  cout<<Fact(5);
  return 0;
}