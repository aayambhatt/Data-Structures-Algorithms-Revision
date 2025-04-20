#include<iostream>
#include <unordered_set>
using namespace std;

class Solution {
    public:
        int duplicateNumbersXOR(vector<int>& nums) {
            unordered_set<int> seen;
            int ans = 0;
    
            for(int num : nums){
                if(seen.count(num)){
                    ans = ans^num;
                }
                else{
                    seen.insert(num);
                }
            }
            return ans; 
            
        }
    };

    class Solution2 {
        public:
            int xorOfNumbersAppearingTwice(vector<int>& nums) {
                vector<int> freq(51, 0);  // Since nums[i] is between 1 and 50, we use 51 to easily access the range [1..50]
                
                // Step 1: Populate the frequency array
                for (int num : nums) {
                    freq[num]++;
                }
                
                // Step 2: XOR the numbers that appear twice
                int result = 0;
                for (int i = 1; i <= 50; i++) {
                    if (freq[i] == 2) {
                        result ^= i;
                    }
                }
                
                return result;
            }
        };
        
int main()
{
 return 0;
}