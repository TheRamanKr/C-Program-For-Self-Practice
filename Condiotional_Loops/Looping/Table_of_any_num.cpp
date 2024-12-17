#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n;
    system("cls");
    cout<<"Enter any number:";
    cin>>n;
    for(int i=1;i<=10;i=i+1)
    {
            cout<<i*n<<endl;
    }
    return 0;
}