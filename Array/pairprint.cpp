#include<iostream>
using namespace std;
/*int main(){
    int arr[] = {10,20,30};
    int n = 3;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<< arr[i] << "," << arr[j] <<"   "<<" Pair sum=" << arr[i]+arr[j] << endl;
        }
    }
}
*/


//pair of triplates
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                cout<<arr[i] <<" " <<arr[j] <<" " <<arr[k] << endl;
            }
        }
    }
}
