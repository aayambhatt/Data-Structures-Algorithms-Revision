#include<iostream>
#include <unordered_set>
using namespace std;

class Solution {
    public:
        // helper function
        bool isDistinct(vector<int>& arr){
            unordered_set<int> st;
            for (int x : arr) {
                if (st.count(x) > 0) {
                    return false;
                } else {
                    st.insert(x);
                }
            }
            return true;
        }
    
        int minimumOperations(vector<int>& nums) {
            int operations = 0;
    
            while(true){
                // check if already distinct
                if(isDistinct(nums)){
                    return operations;
                }
    
                if(nums.size()<=3){
                    operations++;
                    return operations;
                }
    
                    //Remove first 3 normally
                    nums.erase(nums.begin(), nums.begin() + 3);
                    operations++;
    
            }
    
            return operations;
    
        }
            
    
    };
    
    


int main()
{
 return 0;
}