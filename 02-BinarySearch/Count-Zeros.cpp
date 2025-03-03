#include<iostream>
using namespace std;

class Solution {
    public:
      int countZeroes(vector<int> &arr) {
         int n = arr.size();
          int start = 0, end = n - 1;
          int firstOccOfZero = -1;  // To store index of first 0
  
          while (start <= end) {
              int mid = start + (end - start) / 2;
  
              if (arr[mid] == 1) {
                  start = mid + 1;  // Move right
              } else {
                  firstOccOfZero = mid; // Store the first found 0
                  end = mid - 1;    // Move left to find earlier 0
              }
          }
  
          // If no 0 was found, return 0
          if (firstOccOfZero == -1) return 0;
  
          // Count of zeros = n - firstOccOfZero
          return n - firstOccOfZero;
         
      }
  };


int main()
{
 return 0;
}