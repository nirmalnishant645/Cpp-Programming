//Program to create an array dynamically taking the size of array from the user at runtime. Perform input and display operation on that array.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[30],n;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"Enter the elements in array: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"The elements in array are: ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
		cout<<"  ";
	}
	getch();
}

