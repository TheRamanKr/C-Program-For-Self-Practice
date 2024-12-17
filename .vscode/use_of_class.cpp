#include<iostream>
using namespace std;
class person
{
    char name[30];
    int age;

public:
    void getdata (void);
    void dispalay (void);

};

void person::getdata(void)
{
    cout <<"Enter name: ";
    cin >> name;
    cout <<"Enter age";
    cin >>age;
}

void person::dispalay(void)
{
    cout <<"\n Name:" << name;
    cout <<"\n Age: " << age;
}
int main()
{

    person p;
    p.getdata();
    p.dispalay();
    return 0;
}