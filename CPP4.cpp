//Program to print pattern
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,b=1;
	for(i=1;i<5;i++)
	{
		for(j=1;j<=i;++j)
		{
			cout<<b<<" ";
			++b;
		}
		cout<<"\n";
	}
	getch();
}

