#include<iostream>
using namespace std;

class Solution {
    public:
        int heightChecker(vector<int>& heights) {
          int count = 0;
          vector<int> expected = heights;
          int n = heights.size();
    
          sort(expected.begin(), expected.end());
    
          for(int i = 0; i<n ; i++){
            if(heights[i]!=expected[i]){
                count++;
            }
          }
    
          return count;
         
            
        }
    };

int main()
{
 return 0;
}