#include<iostream>
#include<deque>
using namespace std;
int main(){
  deque<int> d;
d.push_back(1);
d.push_front(2);
d.push_front(3);

for(int i:d){
  cout<<i<<endl;
}

d.pop_back();
cout<<endl;

for(int i:d){
  cout<<i<<endl;
}

cout<<"print first index element"<<d.at(1)<<endl;

d.erase(d.begin(),d.begin()+1);
}