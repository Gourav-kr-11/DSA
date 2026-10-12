#include<iostream>
using namespace std;
int digiSum(int num){
  int sum=0;
  while(num>0){
    int temp = num%10;
    sum+=temp;
    num=num/10;
  }
  return sum;
}
int main(){
  int num;
  cout<<"Enter the number";
  cin>>num;
  cout<<digiSum(num);
  return 0;
}