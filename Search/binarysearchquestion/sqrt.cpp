#include<iostream>
using namespace std;

    int binarySearchSqrt(int x){
      int s = 0;
      int e = x;
      long long int mid = s + (e-s)/2;
      while(s<e){
        long long int ans =0;
        long long int square = mid*mid;
        if(square == x){
            return mid;
        }
        if(square<x){
          ans=mid;
          s=mid+1;
        }
        else{
          e=mid-1;

        }
        return ans;
      }
    }

    double morePrecision(int n, int precision,int temp1){
        double factor =1;
        double ans = temp1;
        for(int i =0; i<precision;i++){
          factor =factor/10;
          for(int j=ans;j*j<n;j=j+factor){
            ans = j;
          }
        }
        return ans;
    }
   
    int main(){
      int n;
      cout<<"Enter the number:- "<<endl;
      cin>>n;

      int temp1 = binarySearchSqrt(n);
      cout<<"Answer is "<<morePrecision(n, 3, temp1);
      return 0;
    }
       
 