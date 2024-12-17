#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int target){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(arr[mid]== target){
            return mid;
        }
        else if (arr[mid]<target){
            //right jana hai
            s = mid +1;
        }
        else if(arr[mid]>target){
            //left jao
            e = mid -1;
        }
        //mid updating
        mid = (s+e)/2;

    } 
    //agar yahan tak aa gye hain matlab element nahi mila hai
    return -1;

}
int main()
{
    int arr[] ={10,20,30,40,45,50,55,65,70,75};
    int n = 10;
    int target = 50;

    int ansIndex = binarySearch(arr, n, target);

    if(ansIndex ==-1){
        cout<<"Element is not found " <<endl;
    }
    else{
        cout<<"Element is found at Index:" <<ansIndex <<endl;
    }
    return 0;
}