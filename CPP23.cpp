//Pattern Print
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,n,j,a=1;
	cout<<"Enter the number lines of the pattern : ";
	cin>>n;
	cout<<"The Desired Pattern is :\n";
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<a<<'\t';
			++a;
		}
		cout<<'\n';
	}
	getch();
}