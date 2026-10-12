#include<iostream>
using namespace std;
int main(){
  char ch ='A';
  int n = 4;
  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      cout<<" ";
    }
    for(int j=0;j<n-i;j++){
      cout<<ch;
      
    }
    cout<<endl;
    ch=ch+1;
  }
  return 0;

}