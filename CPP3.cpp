//Program to recognize digit, alphabet or symbol
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{	
	char ch;
	cout<<"Enter the input:\n";
	cin>>ch;
	if(ch>='0'&&ch<='9')
	{
		cout<<"It is a digit";
	}
	else if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
	{
		cout<<"It is an alphabet";
	}
	else
	{
		cout<<"It is a symbol";
	}
	getch();
}

