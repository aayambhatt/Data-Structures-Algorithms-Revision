#include<iostream>
using namespace std;

class Solution {
    public:
      // Function to count the frequency of all elements from 1 to N in the array.
      vector<int> frequencyCount(vector<int>& arr) {
              int n = arr.size();
              vector<int> freq(n, 0);
              
              for(int i = 0 ; i<n ; i++){
                  int num = arr[i];
                  
                  if(num>=1 && num<=n){
                      freq[num-1]++;
                  }
              }
              
              return freq;
      }
  };
  

int main()
{
 return 0;
}