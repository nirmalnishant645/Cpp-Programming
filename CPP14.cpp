//Program to create 2 class HUSBAND & WIFE with 2 private data members name, salary and show parameterized constructor, display and calculate total salary.
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class HUSBAND
{
	private:
	 char name[30];
	public:
	int s1;
	 HUSBAND(int salary)
	 {
		cout<<"Enter the husband's name: ";
		gets(name);
		cout<<"Husband's Name: ";
		puts(name);
		s1=salary;
	 }
};
class WIFE
{
	private:
	 char name[30];
	public:
	int s2;
	 WIFE(int salary)
	 {
		cout<<"Enter the wife's name: ";
		gets(name);
		cout<<"Wife's Name: ";
		puts(name);
		s2=salary;
	 }
};
int main()
{
	int s;
	HUSBAND h(7000);
	WIFE w(5000);
	s=h.s1+w.s2;
	cout<<"Total salary:"<<s;
	getch();
}

