#include<iostream>
#include<vector>
using namespace std;
void print2(vector<int> v){
    cout<<"Printing Vector: " <<endl;
    for(auto it:v){
        cout<<it<<" ";
    }

    // int size = v.size();
    // for(int i=0; i<size; i++){
    //     //cout<<v.at(i) << endl;
    //     cout<< v[i] <<"  ";
    // }
    cout<<endl;
}
int main()
{

vector<int>v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(40);
//print(v);
print2(v);

    // vector<char>v;
    // v.push_back('a');

    // v.push_back('b');
    
    // v.push_back('c');
    
    // cout<<"Front Element: " <<v[0] <<endl;
    // cout<<"Front Element: " <<v.front() <<endl;
    // cout<<"End element: " <<v[v.size()-1] <<endl;
    // cout<<"End element: " <<v.back() <<endl;

    // vector<int> v ;
    // while (1){
    // int d;
    // cin>>d;
    // v.push_back(d);
    // cout<<"Capacity: " << v.capacity() <<"size: " <<v.size <<endl;
    // }
    // return 0;

    /*int n; 
    cin>>n;
    for(int i=0; i<n; i++){
        int d;
        cin>>d;
        v.push_back(d);
    }
    print(v);

    // I want to clear the vector 

v.clear();
v.push_back(50);
print(v);

//pop
v.pop_back();
     print(v);*/

//vector initialization
vector<int>arr; // default with no data, 0 size
vector<int>arr2(5, -1);  //init with n size with specific data 
// arr2.push_back(50);
// print(arr2);

vector<int>arr3 = {1,2,3,4,5};
//arr3.pop_back();
//print(arr3);

//this comes after c++ 11 new way
// vector<int>arr4{1,2,3,4,5};
// print(arr4);

// how to copy vector
// vector<int>arr5 = { 1,2,3,4,5};
// vector<int>arr6(arr5);
// print(arr6);

}