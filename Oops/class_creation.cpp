#include<iostream>
using namespace std;

class Animal{
    //state or properties
    public:
    int age;
    string type;
    int weight;

    //behaviour
    void eat(){
        cout<<"Eating" <<endl;

    }

    void sleep(){
        cout<<"SLeeping" << endl;

    }

    // int getweight(){
    //     return weight();
    // }

    // void setweight(int w){
    //      weight =w;
    // }
};

int main(){

    //Object Creation

    //static
    Animal ramesh;
    ramesh.age =12;
    ramesh.type = "Lion";
    cout<< "Age of ramesh is " << ramesh.age <<endl;
    cout<< "Age of ramesh is " << ramesh.type <<endl;

    ramesh.eat();

    ramesh.sleep();

    //to private member
    //ramesh.setweight(101);
    //cout<< "weight" << ramesh.getweight() <<endl;

    //Dynamic Memory

    return 0;
}