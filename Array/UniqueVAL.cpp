#include<iostream>
using namespace std;
void Unique(int arr[],int sz){
  bool found=false;
  for(int i=0;i<sz;i++){
    bool isUnique=true;
    for(int j=0;j<sz;j++){
      if(i!=j&&arr[i]==arr[j]){
        isUnique=false;
        break;
      }
    }
    if(isUnique){
      cout<<arr[i]<<endl;
      found = true;
    }  
  }
  if(!found){
      cout<<"No unique element found";}
}
int main(){
  int arr[]={1,2,3,4,3,2,1};
  int sz=7;
  Unique(arr,sz);
  return 0;
}