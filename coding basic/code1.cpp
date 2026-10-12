#include<iostream>
using namespace std;
int main(){
  int age;
  cout<< "Enter the age of Voter" <<endl;
  cin>>age;
  if(age>=18){
    cout<<" Eligible";
  }else{
    cout<<"NOT Eligible";
  }   
  return 0;
}
