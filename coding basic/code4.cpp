#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of terms";
  cin>>n;

  int sum=0;
  
  for(int i=0;i<=n;i++){
    sum=sum+i;
  }
  cout<<"The sum is: "<<sum<<endl;
  return 0;
}