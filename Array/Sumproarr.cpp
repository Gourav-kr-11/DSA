#include<iostream>
using namespace std;
int SumArray(int arr[],int sz){
   int sum=0;
   for(int i =0;i<sz;i++){
    sum=sum+arr[i];
   }
   return sum;
}

int ProductArray(int arr[],int sz){
   int product=1;
   for(int i =0;i<sz;i++){
    product=product*arr[i];
   }
   return product;
}

int main(){
  int arr[]={2,4,5,6,4,5};
  int sz=6;
  
  cout<<"The sum of this array will be: "<<SumArray(arr,sz)<<endl;
  cout<<"The product of this array will be: "<<ProductArray(arr,sz)<<endl;
  
  return 0;

}