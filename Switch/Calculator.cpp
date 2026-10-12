#include<iostream>
using namespace std;
int main(){
  
   int a,b;
   cout<<"Enter the value of a and b"<<endl;
   cin>>a>>b;

   char ch;
   cout<<"Chose the Operation between +,-,*,/,%"<<endl;
   cin>>ch;


   switch(ch){
     case '+' : cout<< a+b;
                break;
    case '-' : cout<< a-b;
                break;
    case '*' : cout<< a*b;
                break;
    case '/' : cout<< a/b;
                break;
    case '%' : cout<< a%b;
                break;
   }

  return 0;
}