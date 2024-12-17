#include<iostream>
using namespace std;
void shiftNegativeOneSide(int arr[], int size){
    int j=0;
    //j -> memory block -> jaha par main
    //-ve number ko store kar skta hu
    for(int index=0; index<size; index++){
        //index -> entire array ko traverse karne ke liye
        if(arr[index]<0){
        swap(arr[index],arr[j]);
        j++;
        }
    
    }
}
int main()
{
    int arr[] = {10,2,-12,-58,-85,12,35,35,-65,50};
    int size= 10;

    shiftNegativeOneSide(arr, size);

    //print
    cout<<"Printing the Array: " <<endl; 
    for(int i=0; i<size; i++){
        cout<<arr[i] <<"  ";              
    }
    return 0;
}