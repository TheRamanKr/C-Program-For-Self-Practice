#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("cls");
    for(int i=0;i<3;i=i+1){
        cout<<endl<<"OuterLoop"<<i<<endl<<endl;
        for(int j=0; j<3;j=j+1)
        {
            cout<<"Inner Loop"<<endl;
        }
    }
    return 0;
}