#include<iostream>
using namespace std;
int main()
{
    //int a[] = {2,3,4,5,6};

    //size of char
    char c[] = {'1', '2', '3', '4', '5'};
    cout << sizeof(c) << endl;
    //int n = sizeof(a) / sizeof(int);

    int n = sizeof(c) / sizeof(char);

    cout<<"Size of Array: " << n << endl;
    return 0;
}