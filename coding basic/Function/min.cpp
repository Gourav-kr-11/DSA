#include<iostream>
using namespace std;
int min(int a, int b){
   if(a<b){
    return a;
   }
   else{
    return b;
   }
  }

 int main(){
   cout<< min(5,6);
    return 0;
   }
