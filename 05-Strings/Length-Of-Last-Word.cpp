#include<iostream>
using namespace std;

class Solution {
    public:
        int lengthOfLastWord(string s) {
            int i = s.length()-1;
            int count = 0;
    
            while(s[i] == ' ') {
                i--;
            }
    
            while(i >= 0 && s[i] != ' ') {
                count++;
                i--;
            }
        
            return count;
          
        }
    };

int main()
{
 return 0;
}