#include<iostream>
using namespace std;
int main(){
   char ch;
   cout<<"Enter the Character: ";
   cin>>ch;
   if(ch>='a'&& ch<='z'){
     cout<<"Character is Lowercase";
  }else if(ch>='A'&& ch<='Z'){
     cout<<"Character is Uppercase";//ch value can be replaced by range 65 and 90(implicit type coversion by compiler because character are stored in integer ascii value)
  }else{
    cout<<"Please enter only alphabet character";
  }
  return 0;
}
