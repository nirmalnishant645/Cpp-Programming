//Create the four functions for calculator. The program should request the user to enter a number, an operator and another number. It should then carry out the specified arithmetical operation: adding, multiplying or dividing the 2 numbers. Finally it should display the result. When it finishes the calculation, the program should ask if the user wants to do another calculation.
#include<iostream>
#include<conio.h>
using namespace std;
int a,b;
void add()
{
	int sum;
	sum=a+b;
	cout<<"Addition: "<<sum;
}
void sub()
{
	int sub;
	sub=a-b;
	cout<<"Subtraction: "<<sub;
}
void multiply()
{
	int mul;
	mul=a*b;
	cout<<"Product: "<<mul;
}
void divide()
{
	int div;
	div=a/b;
	cout<<"Division: "<<div;
}
int main()
{
	char op,n;
	do
	{
		cout<<"Enter a number:";
		cin>>a;
		cout<<"Enter operator:";
		cin>>op;
		cout<<"Enter another number:";
		cin>>b;
		switch(op)
		{
			case '+':
			 add();break;
			case '-':
			 sub();break;
			case '*':
			 multiply();break;
			case '/':
			 divide();break;
			default:
			cout<<"Wrong Output";break;
		}
		cout<<"\nDo you want to do another calculation(y/n)?\n";
		cin>>n;
	}while(n!='n');
	getch();
}

