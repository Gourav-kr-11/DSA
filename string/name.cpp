#include<iostream>
using namespace std;

void reverseString(char name[], int n){
  int s=0, e=n-1;
  while(s<e){
    swap(name[s++],name[e--]);
  }

}

int getLength(char name[]){
  int count=0;
  for(int i=0;name[i]!='\0';i++){
    count++;
  }
  return count;
}

int main(){
  char name[20];
  cin>>name;
  //name[2]='\0';
  cout<<"your name is "<<name<<endl;
  int len=getLength(name);
  cout<<"Length: "<<len<<endl;
  reverseString(name, len);
  cout << "reverse is: " << name;

  return 0;
}