#include<iostream>
using namespace std;

class Solution {
    public:
        bool checkIfPangram(string sentence) {
            vector<bool> alphabet (26, 0);
            int n = sentence.size();
    
            for(int i = 0; i<n ; i++){
                int index = sentence[i] - 'a';
                alphabet[index] = true;
            }
    
            for(int i = 0; i<26 ; i++){
                if(alphabet[i]==0){
                    return false;
                }
            }
        
            return true;
    
        }
    };

int main()
{
 return 0;
}