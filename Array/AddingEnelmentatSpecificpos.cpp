#include<iostream>
using namespace std;

class AddingNelements{
    public:
    void Addingdelements(int arr[], int size, int pos, int item);
};
void AddingNelements :: Addingdelements(int arr[], int size, int pos, int item){

    int i = pos;
    while(i> pos){
        arr[i] = arr[i+1];
        i--;
    }
    arr[i] = item;

}

int main()
{
    int array[] = {10,20,30,40,50,60,70};
    int size = 7;
    int pos = 2;
    int item = 100;

    AddingNelements ob;
    ob.Addingdelements(array, size, pos, item);

    cout<<"Printing array after adding element at specific position:" <<endl; 
    for(int i=0; i<size; i++){
        cout<< array[i] <<"  " ;
    }
    return 0;
}