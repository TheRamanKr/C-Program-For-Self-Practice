//This code is working in ascending order 
#include<iostream>
using namespace std;
int findFirstOccurence(int arr[], int n, int target){
    int start =0;
    int end =n-1;
    int mid = start+(end-start)/2;

    int ans=-1;

    while (start<=end){
    if(arr[mid]==target){
        ans = mid;
        //left me jao
        end = mid -1;

    }
    else if(arr[mid]<target){
        //right jana hoga
        start = mid +1;

    }
    else if(arr[mid]>target){
        //left jana hoga
        end = mid -1;
    }
    // mid update 
    mid = (start+ end)/2;
    }
    return ans;
}
int main()
{
    int arr[] = {10,20,25,30,30,30,30,40,50,60,70};
    int n= 11;
    int target = 30;

    int ansIndex=findFirstOccurence(arr, n, target);

    if(ansIndex == -1){
        cout<<"Element is not found " <<endl;
    }
    else{
        cout<<"Element found at Index: " <<ansIndex <<endl;
    }

    return 0;
}