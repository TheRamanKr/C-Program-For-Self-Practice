#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n;
    system("cls");
    cout<<"Enter any Number:";
    cin>>n;
    if(n%2==0){
        cout<<"Given Number is Even";
    }
    else{
        cout<<"Given Number is Odd";
    }
    return(0);
}
