#include<iostream>
using namespace std;
void reverseArray(int arr[], int size){
    
    int left = 0;
    int right = size - 1;

    while( left <= right){
        swap( arr[left], arr[right] );
        left ++;
        right --;
    }

    // for(int left =0, right =size -1; left <=right; left++, right--){
    //     swap(arr[left], arr[right]);
    // }

    //printing the array
    cout<<"Reverse of the given array : " << endl ;
    for(int i=0; i<size; i++){
        cout<< arr[i] << "  ";
    }
}
int main()
{
    int arr[] = {10,20,30,40,50,60,70};
    int n = 7;
    cout<<"Given array : " <<endl ;
    for(int i=0; i<n; i++){
        cout<< arr[i] << "  ";
    }
    cout<<endl;
    reverseArray(arr, n);
    // for(int i=0; i<n; i++){
    //     cout<<arr[i] << "  ";
    // }

    return 0;
}