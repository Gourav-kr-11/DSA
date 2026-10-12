#include<iostream>
#include <climits>
#include<vector>
using namespace std;

int main(){
  vector<int> vec={1,2,3,-6,3,5,6,-8};
  int currSum=0,maxSum=INT_MIN;
  for(int val:vec){
    currSum+=val;
    maxSum=max(currSum,maxSum);
    if(currSum<0){
      currSum=0;
    }
    
  }
  cout<<maxSum<<endl;


  return 0;

}