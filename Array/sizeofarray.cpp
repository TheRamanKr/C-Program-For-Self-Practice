#include<iostream>
using namespace std;
int main()
{
    // int arr[10];
    // char ch[102];    
    // bool flags[223];
    // long num [900];
    // short smun[1000];

    // cout<< "Array created successfully" <<endl;


    // int a = 5;
    // cout<< "Address of a :" <<&a <<endl;

    //   cout<< "Address of a :" <<sizeof(a) <<endl;
    // int arr[10];
    // cout<< "Address of arr is  " << &arr <<end;
    // cout<< "Address of arr is " << arr << endl;


//Array initialization

    // int arr[] = {2,3,4,5,6};

    // int srr[5] = {1,2,3,4,5};

   // int drr[2] = {2,3,4,5,6};  //**Error -> too many initializers for 'int [2]'

    // int srs[5] = {5,6};

    // int mar[50] = {10,20,30,40,50};
    // int n=5;
    // for(int i =0; i<n; i++){
    //     cout<< mar[i] <<", ";
    // }


    
    // cout<< arr[3] <<endl;
    // cout<< arr[2] <<endl;
    // cout<< arr[4] << endl;
    // cout<< srr[5] << endl;

//Taking input in an array

    // int arr[50];
    // int n=5;

    // for(int i=0; i<5; i++){
    //     cout<<"Enter the value for index array:" << i <<" ";
    //     cin>>arr[i];
    // }

    // cout<<"Printing the array:" <<endl;
    // for(int i=0; i<n; i++){
    //     cout<< arr[i] <<" ";
    // }



/*
    int arr[10];
    
    int n=10;
    cout<<"Enter a array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Printing after input" <<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i] << " ";
    } 

    
    //double=up
    cout<<"Doubles" <<endl;
    for(int i=0; i<n; i++){
        arr[i]= arr[i]*2;
    }

    cout<<"Printing after taking double" <<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i] <<" ";
    }
*/


//Sum of integer Array

/*int arr[50],n=5, sum=0;
cout<<"Enter integers:" <<endl;
for(int i=0; i<n; i++){
    cin>>arr[i];
}
cout<<"Print the given integer" << endl;
for(int i=0; i<n; i++){
    cout<<arr[i] << " ";
}
for(int i=0; i<n; i++){
    sum=sum+ arr[i];
}

cout<<"\nsum =" << sum ;
*/



//Linear search in an Array

/*int arr[] = { 10,20,30,40,50};
int target = 40;
int n = 5;
bool flag = 0;
for(int i =0; i <n; i++){
    if(arr[i] == target){
        flag = 1;
    }
}

    if( flag == 1){
        cout<<"target found";
    }
    else{
        cout<<"Target not found";
    }
*/



    return 0;
}



