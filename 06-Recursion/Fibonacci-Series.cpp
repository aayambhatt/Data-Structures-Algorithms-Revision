#include<iostream>
using namespace std;

class Solution {
    public:
        int fib(int n) {
            //base case
            if(n<=1){
                return n;
            }
    
            //recursive case
            return fib(n-1) + fib(n-2);
            
        }
    };

int main()
{
 return 0;
}