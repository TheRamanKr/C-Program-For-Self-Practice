#include<iostream>
using namespace std;
int main(){
    int arr[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    int arr2[4][4];

    int i,j;
    cout<< "Before Transpose Matrix" << endl;
    for( i=0; i<4 ; i++){
        for( j=0; j<4; j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<"After Transpose Matrix" << endl;
    for(i =0; i<4; i++){
        for( j=0; j<4; j++){
            swap(arr2[i][j], arr[j][i]);
        }
    }

    for(i=0 ; i<4 ; i++){
        for( j=0; j<4; j++){
            cout<<arr2[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}