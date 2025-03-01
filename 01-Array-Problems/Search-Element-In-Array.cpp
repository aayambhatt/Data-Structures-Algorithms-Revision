#include<iostream>
using namespace std;

class Solution {
    public:
      // Function to search x in arr
      // arr: input array
      // X: element to be searched for
      int search(vector<int>& arr, int x) {
  
          // Your code here
          int index = -1;
          for(int i = 0 ;i<arr.size(); i++){
              if(arr[i]==x){
                  index = i;
                  break;
              }
          }
          
          return index;
      }
  };

int main()
{
 return 0;
}