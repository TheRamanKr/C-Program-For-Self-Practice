#include<iostream>
using namespace std;

void insertion(int arr[], int size, int pos, int item) {
    int i = size;
    while(i >pos) {
        arr[size] = arr[size-1];
        i = i-1;
    }
    arr[pos] = item;



}

int main() {
    int arr[] = { 10,20,30,40,50,60,70};
    int size = 7;
    int pos =3, item = 35;

    insertion(arr, size, pos, item);

    cout << "Printing array after inserting elements :" << endl;
    for( int i= 0; i<=size; i++) {
        cout<< arr[i] <<"  " ;
    }

    return 0;
}