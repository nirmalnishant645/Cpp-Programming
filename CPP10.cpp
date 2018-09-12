//Design a class distance with 2 private data members to store the distance in inches and feet.
#include<iostream>
#include<conio.h>
class distance
{
	private:
	 float feet;
	 float inches;
	public:
	int d;
	 void dist()
	 {
		std::cout<<"Enter the distance(in cm): ";
		std::cin>>d;
		inches=d/2.54;
		feet=d/12;
		std::cout<<"Inches: "<<inches;
		std::cout<<"\nFeet: "<<feet;
	 }
};
int main()
{
	distance di;
	di.dist();
	getch();
}

