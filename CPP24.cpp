//Leap Year or not without && or || functions
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int year;
	cout<<"Enter a Year : ";
	cin>>year;
	if((year%4==0) && (year%100!=0) || (year%400==0))
	{
		cout<<"The "<<year<<" is the Leap Year.";
	}
	else
	{
		cout<<"The "<<year<<" is not the Leap Year.";
	}
	getch();
}
