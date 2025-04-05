#include<iostream>
using namespace std;

class Solution {
    public:
        string defangIPaddr(string address) {
            int index = 0;
            string ans;
            int n = address.size();
    
            while(index<n){
                if(address[index]== '.'){
                    ans = ans+"[.]";
                }
                else{
                    ans = ans + address[index];
                }
                index++;
            }
            
            return ans;
        }
    };

int main()
{
 return 0;
}