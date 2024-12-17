#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int i=1;
    system("cls");
    for(; ; )
    {
        cout<<"Value of i is:" << i << endl;
        if(i<5)
        {
            cout<<"Raman" << endl;
            i=i+1;
        }
    }
    cout << "End" << endl;
return 0;
}
