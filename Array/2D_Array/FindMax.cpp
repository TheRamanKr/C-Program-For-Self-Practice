#include<iostream>
#include<limits.h>
using namespace std;
findMax(int arr[][4], int row, int col){
    int maxAns = INT_MIN;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]>maxAns){
                maxAns = arr[i][j];
            }
        }
    }
    return maxAns;
}
int main()
{
    int arr[3][4] = {
                        {1,2,3,4},
                        {41,25,52,6},
                        {1,7,100,154}
                    };
     int row = 3;
     int col = 4;

     cout<<"Printing Max no. in  an Array: " << findMax(arr, row, col) <<endl;
    return 0;
}