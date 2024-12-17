#include<iostream>
using namespace std;
printMainDiagonal(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        cout<<arr[i][i] <<endl;
    }
}
int main()
{
    int arr[4][4] = {
                        {1,2,3,4},
                        {4,5,6,7},
                        {8,9,10,11},
                        {12,13,14,15}
                    };
    
    int row = 4;
    int col = 4;

    printMainDiagonal(arr, row, col);
    return 0;
}