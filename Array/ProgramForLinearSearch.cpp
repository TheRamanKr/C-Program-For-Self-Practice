#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,4,5,8,10};
    int target = 10;
    int n=5;

    bool flag=0;
    // 0 -> not found
    // 1 -> found
    for(int i=0; i<n; i++){
        if(arr[i]==10){
            cout<<"Target Found" <<endl;
            flag=1;
            break;
        }
    }

    if(flag == 1){
        cout<<"Target found";
    }
    else{
        cout<<"Target Not found";
    }

    return 0;
}


