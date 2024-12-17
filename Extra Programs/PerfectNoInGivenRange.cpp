#include<iostream>
using namespace std;
int main()
{
    int n, min, max, sum;
    cout<<"Enter minimum range: " <<endl;
    cin>>min;
    cout<<"Enter maximum range: " <<endl;
    cin>>max;

    cout<<"Perfect Numbers are: " <<endl;
    for(n=min; n<=max; n++ ){
        int sum = 0;
        int i = 1;
        while (i<n)
        {
            if(n%i==0){
                sum = sum+ i;
            }
            i++;
        }
        if(sum == n){
            cout<<n <<"  " ;
        }
    }
    return 0;
}