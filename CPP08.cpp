//Program to sum the digit of a number using recursion.
#include<iostream>
#include<conio.h>
using namespace std;
int add(int n)
{
	int s;
	if(n==0)
		return 0;
	s=(n%10+add(n/10));
	return s;
}
int main()
{
	int n,sum;
	cout<<"Enter a number:\n";
	cin>>n;
	sum=add(n);
	cout<<"Sum of digits:"<<sum;
	getch();
}

