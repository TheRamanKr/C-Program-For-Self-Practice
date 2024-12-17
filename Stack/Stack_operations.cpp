#include<iostream>
#include<conio.h>
using namespace std;
int stack[100],top=-1,size;
class Stack
{
	public:
	void push();
	void pop();
	void traversing();
	void peak();
};
void Stack::push()
{
	if(top==size-1)
	{
		cout<<"Stack is full\n";
		getch();
		return;
	}
	top++;
	cout<<"Enter the item :";
	cin>>stack[top];
	cout<<"Item is stored\n";
	getch();
}
void Stack::pop()
{
	if(top==-1)
	{
		cout<<"stack is empty\n";
		getch();
		return;
	}
	int x=stack[top];
	top--;
	cout<<"Deleted item is :"<<x<<endl;
	getch();
}
void Stack::traversing()
{
	if(top==-1)
	{
		cout<<"Stack is  empty\n";
		getch();
		return ;
	}
	int i=top;
	while(i>=0)
	{
		cout<<stack[i]<<endl;
		i--;
	}
	getch();
}
void Stack:: peak()
{
	if(top==-1)
	{
		cout<<"Stack is empty\n";
		getch();
		return;
	}
	cout<<"Top most position element is :"<<stack[top]<<endl;
	getch();
}
int main()
{
	Stack obj;
	int choice;
	cout<<"Enter the stack size max 100 :";
	cin>>size;
	do
	{
		
		cout<<"Stack size is :"<<size<<endl;
		cout<<"1 PUSH\n2 POP\n3 TRAVERSING\n4 PEAK\n5 EXIT\n";
		cout<<"Enter your choice :";
		cin>>choice;
		switch(choice)
		{
			case 1:
				obj.push();
			break;
			case 2:
				obj.pop();
			break;
			case 3:
				obj.traversing();
			break;
			case 4:
				obj.peak();
			break;
			case 5:
				return(0);
			default:
				cout<<"Wrong choice \n";
		}
	}while(1);
	getch();
	return(0);
}