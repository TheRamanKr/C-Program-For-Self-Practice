#include<iostream>
using namespace std;
int main() 
{
    int a,b,c;
    cout<<"Enter three values:" <<" ";
    cin>>a >>b >>c;
    //cin>>b;
    //cin>>c;

    if(a >b && a >c){
        cout<<a << " is greater no." <<endl;
    }
    else if(b >a && b >c){
        cout<<b << " is greater no." <<endl;
    }
    else{
        cout<<c <<"  is greater no." <<endl;
    }
    return 0;
}