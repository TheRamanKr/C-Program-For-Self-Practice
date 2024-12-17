#include<iostream>
using namespace std;

void sortZeroOne(int arr[],int size){
    int zeroCount = 0;
    int oneCount = 0;
    for(int index=0; index<size; index++){
        if(arr[index] == 0){
            zeroCount++;
        }
        if(arr[index] == 1){
            oneCount++;
        }
    }
    int i=0, j;
    for( i=0; i<zeroCount; i++){
        arr[i] = 0;
    }
    for(j=i; i<oneCount; j++){
        arr[i]= 1;
    }
// 

// int index = 0;
// while(zeroCount--){
//     arr[index] = 0;
//     index++;
// }
// while(oneCount--){
//     arr[index] = 1;
//     index++;
// }
}

int main()
{
    int arr[] = {1,0,1,0,1,0,1,1,1,1,0,0,1,0,1,0,1};
    int size = 17;
    sortZeroOne(arr, size);

    for(int i=0; i<size; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}