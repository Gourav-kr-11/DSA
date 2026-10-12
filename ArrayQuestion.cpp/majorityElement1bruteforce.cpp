#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int> nums){

    int n=nums.size();

  for(int val:nums){
    int freq=0;

    for(int el:nums){
      if(el==val){
        freq++;
      }
    }
    if(freq>n/2){
     return val;
    }
  } 

}

int main(){
  vector<int> nums={1,3,1,1,3};
  int g= majorityElement(nums);
  cout<<g<<endl;
  return 0;
}