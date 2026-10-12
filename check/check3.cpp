//power of two

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the value";
  cin>>n;
  int count=0;
  while(n!=0){
  if(n&1){
    count++;
  }
  n=n>>1;
}

if(count==1){
  cout<<"It is power of two";
}
else{
  cout<<"It is not power of two";
}

  return 0;
}