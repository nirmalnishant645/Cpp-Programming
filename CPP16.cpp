//Program to create a class matrix, input no. of rows and columns at runtime using constructor and perform input and display operation on that matrix.
#include<iostream>
#include<conio.h>
using namespace std;
class matrix
{
	public:
	int m,n,a[10][10];
	 matrix()
	 {
		cout<<"Enter the no. of rows in matrix: ";
		cin>>m;
		cout<<"Enter the no. of columns in matrix: ";
		cin>>n;
	 }
	 void input();
	 void display();
};
void matrix::input()
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
			cin>>a[i][j];
	}
}
void matrix::display()
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
int main()
{
	matrix m;
	cout<<"Enter the elements in matrix:\n";
	m.input();
	cout<<"Matrix\n";
	m.display();
	getch();
}

