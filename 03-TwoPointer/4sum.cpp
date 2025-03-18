#include<iostream>
using namespace std;

class Solution {
    public:
        vector<vector<int>> fourSum(vector<int>& nums, int target) {
            vector<vector<int>> result;
            int n = nums.size();
    
            sort(nums.begin(), nums.end());
    
            //first loop for first element
            for(int i = 0; i<n-3 ; i++){
                //skip duplicate nums[i]
                if(i>0 && nums[i]==nums[i-1]) continue;
    
                //second loop for second element
                for(int j = i+1; j<n-2; j++){
                    //skip dupplicate for nums[j]
                    if(j>i+1 && nums[j]==nums[j-1]) continue;
    
                    int start = j+1;
                    int end = n-1;
    
                    while(start<end){
                        long long sum = (long long ) nums[i] + nums[j]+nums[start]+nums[end];
    
                        if(sum==target){
                            result.push_back({nums[i],nums[j],nums[start],nums[end]});
    
                            //skip duplicates 
                            while(start<end && nums[start]==nums[start+1]) start++;
                            while(start<end && nums[end]==nums[end-1]) end--;
    
                            start++;
                            end--;
    
                        }
    
                        else if( sum < target){
                            start++;
                        }
    
                        else{
                            end--;
                        }
                    }
                }
    
    
            }
    
            return result;
            
        }
    };

int main()
{
 return 0;
}
