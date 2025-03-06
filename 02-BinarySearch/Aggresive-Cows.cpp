#include<iostream>
using namespace std;

class Solution {
    public:
        int aggressiveCows(vector<int> &stalls, int k) {
            int n = stalls.size();
            
            if (k > n) return 0;  // Edge case: More cows than stalls
            
            sort(stalls.begin(), stalls.end());  // Ensure sorted order first
    
            int start = 0;
            int end = stalls[n-1] - stalls[0];  
            int ans = 0;
            
            while (start <= end) {
                int mid = start + (end - start) / 2;
                
                int count = 1;  // First cow placed at stalls[0]
                int pos = stalls[0];
                
                for (int i = 1; i < n; i++) {
                    if (stalls[i] - pos >= mid) {  
                        count++;
                        pos = stalls[i];
                    }
                }
                
                if (count < k) {  
                    end = mid - 1;  // Try smaller distance
                } else {
                    ans = mid;  // Store potential answer
                    start = mid + 1;  // Try larger distance
                }
            }
            
            return ans;
        }
    };

int main()
{
 return 0;
}