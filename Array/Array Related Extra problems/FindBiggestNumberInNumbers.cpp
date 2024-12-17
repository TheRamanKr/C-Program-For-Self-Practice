#include<iostream>
using namespace std;
int findBiggest(int arr[], int n){
    int big=0;
    for(int i=0; i<n; i++){
        if(big<arr[i]){
            big=arr[i];
        }
    }
    return big;
}
int main()
{
    int n;
    int arr[100];
    cout<<"Enter no. of elements you have(less than 100): " <<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Your in Integers is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i] <<"  ";
    }

    int ans=findBiggest(arr, n);

    cout<<"\n Biggest Number is: " <<ans;

    return 0;
}