#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int> v;
 v.push_back(2);
 v.push_back(3);
 v.push_back(5);
 //front,back available
 v.pop_back();

 for(int i:v){
  cout<<i<<endl;
 }

 vector<int> a(5,1);
 for(int i:a){
  cout<<i<<endl;
 }

  
}