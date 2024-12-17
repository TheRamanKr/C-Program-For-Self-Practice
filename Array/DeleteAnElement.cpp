#include<iostream>
using namespace std;
class Delete {
    public:
    void deletefromSpecificPos(int arr[], int size, int pos);
};

void Delete :: deletefromSpecificPos(int arr[], int size, int pos){
    int i = pos;
    while( i< size){
        arr[i] = arr[i +1];
        i++ ;
    }
    

}
int main(){
    int array[] = {10,20,30,40,50,60,70};
    int n = 7;
    int pos = 3;

    Delete ob;
    ob.deletefromSpecificPos(array, n, pos);

    cout<<"Printing Array after  deleting specific position:" << endl;
    for(int i=0; i<n; i++){
        cout << array[i] <<"  " ;
    }
    return 0;
}