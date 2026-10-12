#include<iostream>
using namespace std;
int main(){
  
  int a,b=1;
  a=10;
  if(++a)
     cout<<b;
  else
     cout<<++b;


     //In C++, any non‑zero integer is treated as true, so if(11) is true.

     cout<<endl;

     int c=1;
     int d=2;

     if(c-- > 0 && ++d>2){
      cout<<"Stage1 - Inside If ";

     }else{
      cout<<"Stage2-Inside else";
     }
     cout<<c<<" "<<d<<endl;
  return 0;
}

