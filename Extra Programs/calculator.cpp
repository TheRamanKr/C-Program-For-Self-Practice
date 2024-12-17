#include<iostream>
#include<conio.h>
using namespace std;
class Calculator
{
	public :
	float a,b;

	void add();
	void sub();
	void multi();
	void div();
};
void Calculator::add()
{
	cout<<"Addition:"<<a+b<<endl;
}
void Calculator::sub()
{
	cout<<"Subtraction:"<<a-b<<endl;
}
void Calculator::multi()
{
	cout<<"Multiplication:"<<a*b<<endl;
}
void Calculator::div()
{
	cout<<"Division:"<<a/b<<endl;
}

int main()
{
	int choice;
	char ch;
	Calculator obj;
	do{
	cout<<"Enter two numbers :";
	cin>>obj.a>>obj.b;
	cout<<"1 Add\n2 Sub\n3 Multi\n4 Div\n5 Exit\n";
	cout<<"Enter your choice :";
	cin>>choice;
	switch(choice)
	{
		case 1:
			obj.add();
		break;
		case 2:
			obj.sub();
		break;
		case 3:
			obj.multi();
		break;
		case 4:
			obj.div();
		break;
		case 5:
			return(0);
		default:
			cout<<"Wrong choice\n";
			getch();

	}
	cout<<"Do you want to conitnue Y/N :";
	cin>>ch;

}while(ch=='y'||ch=='Y');
getch();
return 0;
}