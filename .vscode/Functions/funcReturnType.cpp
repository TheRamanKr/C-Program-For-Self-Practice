//sum of two numbers using functions with return/argument without parameter
#include<iostream>
using namespace std;
int sum(){
    int a,b,c;
    cout<<"Enter two number:" << endl;
    cin>> a >> b;
    c = a + b;
    return c;
    
}
int main(){
    int s;
    s = sum();
    cout << "sum =" << s << endl ;
    return 0;

}