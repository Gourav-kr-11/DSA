#include<iostream>
#include<vector>
using namespace std;


int main(){
  vector<int> vec= {1,2,3};
  vector<int> vec1={'a','b','c'};
  vec1.pop_back();
  vec1.push_back('g');
  for(char val : vec1){//for each loop
    
    cout<<val<<endl;
  }
  cout<<vec.at(2)<<endl;
  return 0;
}