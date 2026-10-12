#include<iostream>
using namespace std;

int setBits(int a ,int b){

  int count=0;
  while(a>0){
  if(a&1){
    count++;
   
  } a=a>>1;
}

while(b>0){
  if(b&1){
    count++;
   
  } b=b>>1;
}
  return count;

}
int main(){
  
  int a,b;
  cout<<"Enter the value of a and b"<<endl;
  cin>>a>>b;

  cout<<setBits(a,b);
  return 0;
}