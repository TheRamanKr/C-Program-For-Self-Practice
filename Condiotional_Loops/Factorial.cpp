#include<iostream>
using namespace std;

long factorial(int n){
    
        long fact =1;
        for(int i=0; i<n; i++) {
            fact = fact*i;
        }
        
        return fact;
}

int main(){
    int n;
    cout<<"Enter a positive integer: " <<endl;
    cin>>n;
    
    if(n<0) {
        cout<<"Factorial of negative number not possible " <<endl;
    }
    else if(n>=0){
        long ans= factorial(n);
        cout<<"Factorial of " << n <" = " << ans <<endl;
    }

    return 0;
}