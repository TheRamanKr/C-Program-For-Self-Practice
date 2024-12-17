//Minimum and Maximum number in an Array 
#include<iostream>
#include<limits.h>
using namespace std;
int findminInArray(int arr[], int size){
    //ans store variable
    int minAns = INT_MAX;

    for(int i=0; i<size; i++){
        if(arr[i] < minAns){
            minAns = arr[i];
        }
    }

    return minAns;
}
int main()
{
    // -2 to the power 31
    // cout << INT_MIN << endl;
    // // 2 to the power 31
    // cout << INT_MAX << endl;

    int arr[] = {10,15,8,18,25,-15,3,1};
    int size = 8;
    int minimun = findminInArray(arr, size);
    cout<< "Minimum number is " << minimun ;
    return 0;
}