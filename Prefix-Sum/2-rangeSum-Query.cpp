#include<iostream>
using namespace std;

class NumArray {
private:
    vector<int> prefix;  // class-level prefix array

public:
    NumArray(vector<int>& nums) {
        //built prefix sum here
        int n = nums.size();
        prefix = vector<int>(n);
        prefix[0] = nums[0];
        for(int i = 1 ; i<n ; i++){
            prefix[i] = prefix[i-1] + nums[i];
        }

    }
    
    int sumRange(int left, int right) {
        // return sum using prefix array
        if(left==0){
            return prefix[right];
        }
        else {
            return prefix[right] - prefix[left-1];
        }
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

int main()
{
 return 0;
}