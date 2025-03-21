#include<iostream>
using namespace std;

class Solution {
    public:
        bool isPalindrome(int x) {
            if(x<0){
                return false;
            }
    
            int num = x;
            int rem;
            int ans = 0;
    
            while(num){
                rem = num%10;
                num = num/10;
                if(ans>INT_MAX/10) { 
                    return false;
                }
                ans = ans*10 + rem;
            }
    
            if(ans ==x){
                return true;
            }
            else{
                return false;
            }
            
        }
    };

int main()
{
 return 0;
}