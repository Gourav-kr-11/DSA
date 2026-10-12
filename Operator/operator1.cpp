#include<iostream>
using namespace std;
int main(){
  int a =4;
  int b=6;
  cout<<"a&b= "<<(a&b)<<endl;
  cout<<"a|b= "<<(a|b)<<endl;
  cout<<"a^b= " <<(a^b)<<endl;
  cout<<"~a= "<<(~a)<<endl;

  //Left shift(shift bit from postion used as numberwhichisshifting<<how many bit shifting 4<<2)
    cout<<(19<<1)<<endl;
    cout<<(19<<2)<<endl;
   //Right shift(shift bit from postion used as numberwhichisshifting>>how many bit shifting 4>>2)
     cout<<(17>>1)<<endl;
     cout<<(19>>2)<<endl;
  return 0;
}