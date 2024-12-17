#include<iostream>
using namespace std;
int sum( int a, int b){
    int c;
    c = a + b;
    return c;
}
int main(){
    int x, y, s ;
    cout<< "Enter two numbers :" << endl ;
    cin>> x >> y ;
    s = sum( x, y);
    cout<< "sum =" << s;
    return 0;
}
