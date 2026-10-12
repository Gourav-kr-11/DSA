#include<iostream>
#include<list>
using namespace std;
int main(){
list<int> l;
//copy list
list<int> n(5,100);
l.push_back(1);
l.push_back(2);
for(int i:l){
  cout<<i<<endl;

}
cout<<endl;
l.erase(l.begin());
cout<<"After erase"<<endl;
for(int i:l){
  cout<<i<<endl;

}

}