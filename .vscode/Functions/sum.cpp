//sum of two numbers using functions without return/argument without parameter
#include<iostream>
using namespace std;
void sum(){
    int a,b,s;
    cout<<"Enter two numbers:" << endl;
    cin>> a >> b;
    s=a+b;
    cout<< "sum =" << s;
}
int main()
{
    sum();
    return 0;
}