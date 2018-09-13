//Program to define a class operation and perform the following:- Accept the two numbers from user. Calculate sum of two numbers using nesting of member function sum in to another member function display.
#include<iostream>
#include<conio.h>
using namespace std;
class operation
{
	public:
		int a,b,s;
		void display();
		void sum();
};
void operation::display()
{
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"Enter 2nd number: ";
	cin>>b;
	sum();
	cout<<"Sum of numbers: "<<s;
}
void operation::sum()
{
	s=a+b;
}
int main()
{
	operation o;
	o.display();
	getch();
}

