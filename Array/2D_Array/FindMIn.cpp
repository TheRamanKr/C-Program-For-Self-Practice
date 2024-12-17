#include<iostream>
#include<limits.h>
using namespace std;
findMin(int arr[][4], int row, int col){
    int minAns = INT_MAX;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]< minAns){
                minAns = arr[i][j];
            }
        }

    }
    return minAns;
}
int main()
{
    int arr[3][4] = {
                        {8,9,10,11},
                        {12,13,45,42},
                        {1,2,3,5}
                    };
    
    int row = 3;
    int col = 4;

   // int min = findMin(arr, row, col);
    cout<<" Printing Min no. in an Array: " <<findMin(arr, row, col) <<endl;
    return 0;
}