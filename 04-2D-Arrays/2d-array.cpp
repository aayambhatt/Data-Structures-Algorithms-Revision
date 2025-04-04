#include<iostream>
using namespace std;
int main()
{
    //create 2d array and initialising 
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    //print all the values in array
    for(int row = 0; row<3 ; row++)
    for(int column = 0; column<4 ; column++)

    cout<<arr[row][column]<<" ";


 return 0;
}