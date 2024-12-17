#include<iostream>
using namespace std;

// class Animal{

// };

// int main(){
//     cout<<"size of empty class is =" << sizeof(Animal) << endl;
//     return 0;
// }

class Animal{
    int age;
    char ch;            //padding (int =4, char=1,int=4 but with 12)
    int weight;
};
int main(){
    cout<<"size of class =" <<sizeof(Animal) << endl;
    return 0;
}