#include<iostream>
using namespace std;


class Solution {
    public:
      bool hasTripletSum(vector<int> &arr, int target) {
          // Your Code Here
          int n = arr.size();
          
          sort(arr.begin(), arr.end());
          
          for(int i = 0; i<n-2 ; i++){
              int start = i+1;
              int end = n-1;
              
              while(start<end){
                  int sum = arr[i]+arr[start]+arr[end];
                  
                  if(sum==target){
                      return true;
                  }
                  else if (sum<target){
                      start++;
                  }
                  else{
                      end--;
                  }
              }
          }
          
          return false;
      }
  };
  

int main()
{
 return 0;
}