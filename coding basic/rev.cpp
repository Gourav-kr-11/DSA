#include<iostream>
using namespace std;
int main(){
  int num =987;
   int newN =0;
  while(num>0){
   int temp = num%10;
   newN=newN*10+temp;
   num=num/10;
  }
  cout<<newN;
  return 0;

}