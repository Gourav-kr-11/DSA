#include<iostream>
using namespace std;

int dectoBinary(int decNum){
  int ans = 0,pow =1;
  while(decNum>0){
    int rem = decNum%2;
    decNum/=2;

    ans+=(rem*pow);
    pow*=10;
  }
  return ans;//binary form

}
int main(){
  int decNum = 50;

  cout<< dectoBinary(decNum)<<endl;
  return 0;
}