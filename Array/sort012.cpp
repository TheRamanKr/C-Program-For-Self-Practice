#include<iostream>
using namespace std;
void sort012(int arr[], int size)
    {
        // code here 
        int zeroCount =0, oneCount=0, twoCount=0;  

            for(int i=0; i<size; i++){
                if(arr[i] == 0){
                 zeroCount++;
                }
                if(arr[i] == 1){
                    oneCount++;
                }
                if(arr[i] ==2){
                    twoCount++;
                }
        }

// int i, j, k;

//     for( i=0; i<zeroCount; i++){
//         arr[i] = 0;
//     }
//     for( j=i; j<oneCount; j++){
//         arr[i] =1;
//     }
//     for( k=j; k<twoCount; k++){
//         arr[i] = 2;
//     }

    int index = 0;
while(zeroCount--){
    arr[index] = 0;
    index++;
}
while(oneCount--){
    arr[index] = 1;
    index++;
}
while(twoCount--){
    arr[index] = 2;
    index++;
}

    }

    int main(){
        int arr[] = {0,1,2,1,2,1,0,1,2,0,2,1,2,0,1,2,0,1};
        int size = 18;

    sort012(arr, size);
        for(int i=0; i<size; i++){
            cout<<arr[i] << "  ";
        }
        
}