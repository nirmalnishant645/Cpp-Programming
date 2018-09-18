//Program to subtract 2 complex numbers using Operator Overloading.
#include<iostream>
#include<conio.h>
using namespace std;
class complex
{float real,imag;
	public:
	 complex():real(0),imag(0){}
	 void input()
	 {
		cout<<"Enter the real and imaginary parts respectively:\n";
		cin>>real>>imag;
	 }
	 complex operator -(complex c2)
	 {
		complex temp;
		temp.real=real-c2.real;
		temp.imag=imag-c2.imag;
		return temp;
	 }
	 void output()
	 {
		if(imag<0)
			cout<<"Output Complex Number: "<<real<<imag<<"i";
		else
			cout<<"Output Complex Number: "<<real<<"+"<<imag<<"i";
	 }
};
int main()
{
	complex c1,c2,result;
	cout<<"Enter first complex number.\n";
	c1.input();
	cout<<"Enter second complex number.\n";
	c2.input();
	result=c1-c2;
	result.output();
	getch();
}
