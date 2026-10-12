#include<iostream>
using namespace std;

int pow(int a, int b){

  int sum=1;

  for(int i=1;i<=b;i++){
     sum=sum*a;
  }
  return sum;
}


int main(){
  //pow(a,b)

  int a,b;
  cin>>a>>b;

 int answer= pow(a,b);

 cout<<"Answer is:"<<answer;

  return 0;
}
