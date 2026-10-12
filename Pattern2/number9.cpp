#include<iostream>
using namespace std;
int main(){
  
  int n;

  cout<<"Enter the value of n";
 
  cin>>n;

  int i=1;

  while(i<=n){
    int j=1;
    int score=i;
    while(j<=i){
      cout<<score;
      score=score+1;
      j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
  



  return 0;
}