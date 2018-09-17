//Program to print a character given number of times
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	char ch;
	cout<<"Enter a character: \n";
	cin>>ch;
	cout<<"Enter the number of times you want to print: \n";
	cin>>n;
	cout<<"The character is: ";
	for(int i=0;i<n;i++)
		cout<<ch<<"  ";
	getch();
}

