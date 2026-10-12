#include<iostream>
using namespace std;
int main(){

  int  amount;
  cout<<"Enter the amount"<<endl;
  cin>>amount;

  int num=1;
  int note=0;

  switch(num){

    case 1:note=amount/100;
    cout<<"Amount of 100 notes:"<<note<<endl;
         amount= amount%100;
    
    case 2:note=amount/50;
    cout<<"Amount of 50 notes:"<<note<<endl;
         amount=amount%50;

    case 3:note=amount/20;
    cout<<"Amount of 20 notes:"<<note<<endl;
         amount=amount%20;

    case 4:note=amount/10;
    cout<<"Amount of 10  notes"<<note<<endl;
         amount=amount%10;
  }

  return 0;
}