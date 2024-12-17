//Write a C++ Program to print Perfect Numbers between 1 to 100
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Perfect number between 1 to 100: " <<endl;
    for(int n=1; n<100; n++){
        int i= 1;
        int sum =0;
        while(i<n){
            if(n%i==0){
                sum = sum+ i;
            }
            i++;
        }
        if(sum == n){
            cout<<n << "  ";
        }
    }
    return 0;
}