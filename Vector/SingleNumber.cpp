#include<iostream>
#include<vector>
using namespace std;
int SingleNum(vector<int>&nums){
  int ans =0;
  for(int i:nums){
     ans=ans^i;
  }
  return ans;
  
}

int main(){
 vector<int> nums={1,2,3,1,2,3,4};
 cout<<SingleNum(nums)<<endl;
 return 0;

}