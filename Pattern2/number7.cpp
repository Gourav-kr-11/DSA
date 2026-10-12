#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the value of n";
  cin>>n;
  int i=1;
  while(i<=n){
    int  j = 1;
    int value=i;
    while(j<=i){
      cout<<value;
      value=value+1;
      j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
  return 0;
}
/*
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the value of n";
  cin>>n;
  int i=1;
  int count=i-1;
  while(i<=n){
  int j=i;
  while(j<i+count){
  cout<<j;
  }
  }


  return 0;
}
*/