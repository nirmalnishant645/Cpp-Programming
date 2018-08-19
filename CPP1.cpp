// Program to enter 10 numbers and count total even and odd numbers and then perform the sum of even and odd numbers separately
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	clrscr();
	int a[10],i,se=0,so=0,cte=0,cto=0;
	cout<<"Enter 10 numbers\n";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
		{
			se=se+a[i];cte++;
		}
		else
		{
			so=so+a[i];
			cto++;
		}
	}
	cout<<"\nTotal even numbers:"<<cte;
	cout<<"\nTotal odd numbers:"<<cto;
	cout<<"\nSum of even numbers:"<<se;
	cout<<"\nSum of odd numbers:"<<so;
	getch();
}

