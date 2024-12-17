#include<iostream>
using namespace std;
bool twoSum(int sr[], int n, int k){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
        if(sr[i] + sr[j] == k){
            return true;
        }
    }
    }
    return false;
}
int main()
{
    int sr[] = {1,4,45,6,10,8};
    int size = 6;
    int k = 16;

    bool ans = twoSum( sr, size, k);

    cout<<"ans is: " << ans <<endl;

    return 0;
}