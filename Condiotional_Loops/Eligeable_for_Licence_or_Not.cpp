#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int age;
    system("cls");
    cout<<"Enter the age:";
    cin>>age;
    if(age>=18){
        cout<<"Eligeable for vote";
    }
    else{
        cout<<"Not eligeable for vote";
    }
    return(0);
}