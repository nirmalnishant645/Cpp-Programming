//Program to create a function int() having following parameters ID, name, course. Pass parameters to this function through user and if user does not give parameter provide default value to ID as 1and name as 'abc'.
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
void function(int ID,char name[],char course[])
{
	cout<<"Enter the ID,Name and Course:\n";
	cin>>ID;
	gets(name);
	gets(course);
}
int main()
{
	int ID=1;
	char n,name[20]="abc",course[20];
	cout<<"Want to give parameters in function(y/n)\n";
	cin>>n;
	if(n=='y')
	{
		function(ID,name,course);
		cout<<"\nID: "<<ID<<"\nName: ";
		puts(name);
		cout<<"Course: ";
		puts(course);
	}
	else
	{
		cout<<"\nID: "<<ID<<"\nName: ";
		puts(name);
	}
	getch();
}

