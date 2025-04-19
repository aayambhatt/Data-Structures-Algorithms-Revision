#include<iostream>
using namespace std;

class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int n = nums.size();
            int left = 0;
            int right = n-1;
            
            while(left<=right){
                int mid = left + (right-left)/2;
                
                // I found the element
                if(nums[mid]==target){
                    return mid;
                }
                
                if(nums[left]<=nums[mid]){
                    //left side is sorted
                    if(nums[left]<=target && target<nums[mid]){
                        right=mid-1;
                    }
                    else{
                        left = mid+1;
                    }
                }
                else{
                    //right side is sorted
                    if(nums[mid]<target && target<=nums[right]){
                        left = mid+1;
                    }
                    else{
                        right = mid-1;
                    }
                }
            }
            
            return -1;
        }
    };

int main()
{
 return 0;
}