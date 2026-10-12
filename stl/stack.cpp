#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<string> s;
s.push("gourav");
s.push("kumar");
s.push("the great");
cout<<"Top element is "<<s.top()<<endl;
s.pop();
cout<<"Top element is "<<s.top()<<endl;



}