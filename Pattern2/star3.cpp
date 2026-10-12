#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the value of n";
  cin>>n;
  int i=1;
  while(i<=n){
    //space print
    int space=n-i;
    while(space){
      cout<<" ";
      space=space-1;
    }
    //star print
    int j=1;
    while(j<=i){
      cout<<"*";
      j=j+1;
    }
    cout<<endl;
    i=i+1; 
  }
 

  return 0;
}
