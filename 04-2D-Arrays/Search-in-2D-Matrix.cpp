#include<iostream>
using namespace std;

class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int m = matrix.size(); // no of rows
            int n = matrix[0].size(); // no of columns
    
            int start = 0;
            int end = (m*n-1);
    
            while(start<=end){
                int mid = (start+end)/2;
                int row = mid/n;
                int col = mid%n;
    
                if(matrix[row][col]==target){
                    return true;
                }
                else if(matrix[row][col]<target){
                    start = mid+1;
                }
                else{
                    end = mid-1;
                }
            }
            
            return false;
        }
    };

int main()
{
 return 0;
}