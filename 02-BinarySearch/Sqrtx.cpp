#include<iostream>
using namespace std;

class Solution {
    public:
        int mySqrt(int x) {
            // edge cases
            if(x==1 || x==0){
                return x;
            }
    
            int left = 1;
            int right = x/2;
            int ans = 1;
    
            while(left<=right){
                long long mid = left + (right-left)/2;
    
                if(mid*mid==x){
                    return mid;
                }
                else if (mid*mid<x){
                    ans = mid;
                    left = mid+1;
                }
                else{
                    right = mid-1;
                }
            }
    
            return ans;
            
        }
    };

int main()
{
 return 0;
}