#include<iostream>
using namespace std;
int main(){
  char a;
  cout<<"Enter the value of a"<<endl;
  cin>>a;
  if(a>='a' && a<='z'){
    cout<<"lowercase"<<endl;
  }
  else if(a>='A' && a<='Z')
  {
    cout<<"UpperCase"<<endl;
  }
 else if(a >= '0' && a <= '9'){
    cout << "Number" << endl;
  }
  else {
    cout << "Special Character" << endl;
  }
  return 0;
}