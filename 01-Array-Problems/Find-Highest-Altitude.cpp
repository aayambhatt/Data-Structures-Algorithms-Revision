#include<iostream>
using namespace std;

class Solution {
    public:
        int largestAltitude(vector<int>& gain) {
            int n = gain.size();
            int currAl = 0;
            int maxAl = 0;
            
            for(int i = 0 ; i<n ; i++){
                currAl = currAl + gain[i];
    
                maxAl = max(maxAl, currAl);
            }
    
            return maxAl;
    
        }
    };

int main()
{
 return 0;
}