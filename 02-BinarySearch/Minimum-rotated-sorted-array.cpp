#include<iostream>
using namespace std;

class Solution {
    public:
        int findMin(vector<int>& nums) {
            int n = nums.size();
            int left = 0;
            int right = n-1;
            
            while(left<right){
               int mid = left + (right - left) / 2;
                
                if(nums[mid]>nums[right]){
                    left = mid+1;
                }
                else{
                    // Min is in the left half, including mid
                    right = mid;
                }
            }
            return nums[left];
            
        }
    };

int main()
{
 return 0;
}