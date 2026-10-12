#include<iostream>
using namespace std;
int sum(int a,int b){
 int s = a+b;
 return s;
}
int main(){
  //example 1
  cout<<sum(10,20)<<endl;

  //example 2
  int a;
  cout<<"Enter the value of a";
  cin>>a;
  cout<<"Enter the value of b";
  int b;
  cin>>b;
  cout<< sum(a,b);


  return 0;
}