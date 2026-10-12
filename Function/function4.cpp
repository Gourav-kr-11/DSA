#include<iostream>
using namespace std;

//void is used when function does not return anything , it will print only

void countNum(int n){

  for(int i=1;i<=n;i++){
    cout<<i<<endl;
  }
}
int main(){
  
  int n;
  cout<<"Enter the value of n"<<endl;
  cin>>n;

  countNum(n);



}