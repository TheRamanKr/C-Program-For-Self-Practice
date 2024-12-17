#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n;
    system("cls");
    cout<<"Enter any Number:";
    cin>>n;
    if(n>0){
        cout<<"No. is Positive";
    }
    else{
        if(n==0){
            cout<<"No. is Equal to Zero";
        }
        else{
            cout<<"No. is Negative";
        }
    }
}