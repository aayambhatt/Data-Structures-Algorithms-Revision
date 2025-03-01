#include<iostream>
using namespace std;

class Solution {
    public:
        int bitwiseComplement(int n) {
    
            if(n==0){
                return 1;
            }
    
            int ans =0;
            int rem;
            int mul=1;
    
            while(n){
                rem = n%2;
                rem=rem^1;
                n = n/2;
                ans = ans+rem*mul;
                mul= mul*2;
            }
    
            return ans;
            
        }
    };


int main()
{
 return 0;
}