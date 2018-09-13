//Program to create class student having two private data members ROLL_NO & Name. Create 5 objects of this class dynamically and initialize them at creation.
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class student
{
	private:
	int ROLL_NO;
	 char name[30];
	public:
	 void input();
	 void display();
};
void student::input()
{
	cin>>ROLL_NO;
	gets(name);
}
void student::display()
{
	cout<<ROLL_NO<<"  ";
	puts(name);
}
int main()
{
	student s[5];
	for(int i=1; i<6; i++)
	{
		cout<<"Enter the roll no. and name of student "<<i<<endl;
		s[i].input();
	}
	for( int i=1;i<6;i++)
	{
		cout<<"Roll no. and name of student "<<i<<endl;
		s[i].display();
	}
	getch();
}

