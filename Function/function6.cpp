#include<iostream>
using namespace std;

int aP(int a,int d,int n){

  int q=a+(n-1)*d;

  return q;
}
int main(){

  int a,d,n;
  cout<<"Enter the First term"<<endl;
  cin>>a;

  cout<<"Enter the common difference"<<endl;
  cin>>d;

  cout<<"Enter the postion of term"<<endl;
  cin>>n;

  cout<<"The value of Nth term is :"<<aP(a,d,n)<<endl;

  return 0;
}