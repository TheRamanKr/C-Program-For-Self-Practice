#include<iostream>
using namespace std;
int findLastOccurence(int arr[], int n, int target){
    int start =0;
    int end = n-1; 
    int mid = start+(end-start)/2;

    int ans=-1;
    while (start<=end){
        if(arr[mid]==target){
            ans = mid;
            //right jana hai
            start = mid+1;
        }
        else if(arr[mid]>target){
            //left jana hoga
            end = mid-1;
        }
        else if(arr[mid]<target){
            //right jana hoga
            start = mid +1;
        }
        //mid update
        mid = (start+end)/2;
    }
    return ans;
    
}
int main()
{
    int arr[] = {10,20,30,40,40,40,40,40,60,70,80};
    int n= 11;
    int target= 40;

    int ansIndex= findLastOccurence(arr, n, target);
    if(ansIndex==-1){
        cout<<"Element is not found" <<endl;
    }
    else{
        cout<<"Element found at Index: " <<ansIndex <<endl;
    }
    return 0;
}