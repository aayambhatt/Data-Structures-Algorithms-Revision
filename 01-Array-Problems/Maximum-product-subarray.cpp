#include<iostream>
using namespace std;

class Solution {
    public:
        int maxProduct(vector<int>& nums) {
            int n = nums.size();
            int maxProd = nums[0];
            int minProd = nums[0];
            int ans = nums[0];
    
            for(int i = 1 ; i<n ; i++){
                // If the current number is negative, swap max and min
                if (nums[i] < 0) {
                    swap(maxProd, minProd);
                }
                
                // Calculate the maximum and minimum products
                maxProd = max(nums[i], maxProd * nums[i]);
                minProd = min(nums[i], minProd * nums[i]);
                
                // Update the answer with the maximum product seen so far
                ans = max(ans, maxProd);
            }
                return ans;
            
        }
    };

int main()
{
 return 0;
}