#include<iostream>
#include<queue>
using namespace std;
int main(){
queue<string> q;
q.push("gourav");
q.push("kumar");
q.push("the great");
cout<<"Top element is "<<q.front()<<endl;
q.pop();
cout<<"Top element is "<<q.front()<<endl;

}