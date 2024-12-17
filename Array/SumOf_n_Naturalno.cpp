//Sum of tne series 1+2+3+4+5....+n using iteration
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter no of terms:";
    cin >> n;
    for(int i=1; 1<=n; i++){
        sum =sum+i;
    }
    cout<< "sum = " <<sum;
    
    return 0;
}