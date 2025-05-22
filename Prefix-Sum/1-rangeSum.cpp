#include<iostream>
using namespace std;

int rangeSum(vector<int>& nums, int i, int j) {
    int n = nums.size();
    vector<int> prefix(n);
    prefix[0] = nums[0];

    for(int k = 1; k < n; k++) {
        prefix[k] = prefix[k - 1] + nums[k];
    }

    if(i == 0) {
        return prefix[j];
    } else {
        return prefix[j] - prefix[i - 1];
    }
}


int main()
{
 return 0;
}