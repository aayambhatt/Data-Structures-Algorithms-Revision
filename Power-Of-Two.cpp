#include<iostream>
using namespace std;

class Solution {
    public:
        bool isPowerOfTwo(int n) {
    
            if(n<1){
                return false;
            }
    
            while(n!=1){
                if(n%2==1){
                    return false;
                }
                n=n/2;
            }
    
            return true;
            
        }
    };


int main()
{
 return 0;
}