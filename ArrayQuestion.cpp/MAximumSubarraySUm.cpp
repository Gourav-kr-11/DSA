#include<iostream>
#include<climits>
using namespace std;

int main(){
  int arr[6]={1,-4,3,5,-2,5};
  int sz=6;
  int MaxSum=INT_MIN; 
  for(int st=0;st<sz;st++){
    int CurrArr=0;
    for(int end=st;end<sz;end++){
      CurrArr+=arr[end];
      MaxSum=max(CurrArr,MaxSum);
    }
  }
  cout<<"The maximum sum of the subarrray is:" <<MaxSum<<endl;
  return 0;
}