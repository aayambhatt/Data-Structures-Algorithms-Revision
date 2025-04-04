#include<iostream>
using namespace std;

class Solution {
    public:
        int mostFrequentEven(vector<int>& nums) {
            unordered_map<int, int> freq;
            int maxFreq = 0;
            int result = -1;
    
            // count frequencies of even number
            for(int num : nums){
                if(num%2==0){
                    freq[num]++;
                }
            }
    
            // find most frequency of even number
            for(auto& pair : freq){
                int num = pair.first;
                int count = pair.second;
    
                if(count>maxFreq){
                    maxFreq = count;
                    result = num;
                }
                else if(count==maxFreq){
                    result = min(result, num);
                }
    
            }
    
            return result;
    
        }
    };

int main()
{
 return 0;
}