//Program to multiply two numbers without using '*'
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,m=0,i;
	cout<<"Enter 2 numbers: \n";
	cin>>a>>b;
	for(i=0;i<b;i++)
		m=m+a;
	cout<<"Output: \n"<<m;
	getch();
}

