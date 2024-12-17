#include<iostream>
using namespace std;
class student
{
    private:
    int a,b,c;
    public:
    void operator-(void);
    void show(void);
};
class student2
{
    private:
    int d,e,f;
    public:
    void operator-(void);
    void shows(void);
};
void student ::operator-(void)
{
    a=10;
    b=15;
    c=a-b;
}
void student2:: operator-(void)
{
    d=12;
    e=34;
    f=e-d;

}
void student:: show(void)
{
    cout<<c<<endl;
}
void student2:: shows(void)
{
    cout<<f;
}
int main()
{
    student s1;
    -s1;
    s1.show();
    student2 s2;
    -s2;
    s2.shows();
    return 0;
}