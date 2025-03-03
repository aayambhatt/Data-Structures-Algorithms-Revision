#include<iostream>
using namespace std;

class Solution {
    public:
      // Function returns the second
      // largest elements
      int getSecondLargest(vector<int> &arr) {
      
      int n = arr.size();
      int ans = -1;
      
      //largest element 
      for(int i = 0; i<n ; i++){
          if(arr[i]>ans){
              ans = arr[i];
          }
      }
      
      //second largest
      int second = -1;
      for(int i = 0; i<n ;i++){
          if(arr[i]!=ans){
              second = max(second, arr[i]);
          }
      }
          
          return second;
      
      }
  };

int main()
{
 return 0;
}