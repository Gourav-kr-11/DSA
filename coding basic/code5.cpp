#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter the value of n";
   cin>>n;
   int sum=0;
   for(int i=1;i<=n;i++){
    if(i%2!=0){
       sum+=i;
    }
   }
   cout<<"The sum of even number is "<<sum<<endl;

  return 0;
}