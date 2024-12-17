//sum of two numbers using functions without return/argument with parameter
#include<iostream>
using namespace std;
void sum(int a, int b){
    int c;
    c = a + b;
    cout << c;
}
int main(){
    int x, y;
    cout << "Enter two numbers:" <<endl;
    cin>> x >> y;
    sum( x, y);
    return 0;
}