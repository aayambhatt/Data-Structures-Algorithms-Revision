#include<iostream>
using namespace std;

class Solution {
    public:
        int threeSumClosest(vector<int>& nums, int target) {
    
            int n = nums.size();
            sort(nums.begin(), nums.end());
            int closestSum = nums[0]+nums[1]+nums[2];
                   
            for(int i = 0; i<n-2 ; i++){
                int left = i+1;
                int right = n-1;
            
                while(left<right){
                   int sum = nums[i]+nums[left]+nums[right];
                
                   if(sum==target){
                        return sum;
                   }
                   else if(abs(sum-target)<abs(closestSum-target)){
                       closestSum = sum;
                   }
                   else if(sum<target){
                       left++;
                   }
                   else{
                       right--;
                   }
                   
                }
            }
            
            return closestSum;
            
        }
    };

int main()
{
 return 0;
}