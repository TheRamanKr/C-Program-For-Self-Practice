#include<iostream>
using namespace std;
void countZeroOne(int arr[], int size){
    int zeroCount = 0;
    int oneCount = 0;

    for(int i=0; i<size; i++){
        if( arr[i] == 0){
            zeroCount++;
        }
        if( arr[i] == 1){
            oneCou
    cout<<"No . of Ones :" << oneCount << endl;
nt++;
        }
    }
    cout<<"No. of zeros:" << zeroCount << endl;

}

int main()
{
    int size = 20;
    int arr[20]={0,0,1,0,1,0,1,0,1,0,1,2,0,5,6,7,2,1,0,1};
    countZeroOne(arr,size);
    return 0;
}

