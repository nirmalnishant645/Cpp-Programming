/*Program to create base class house which has following member functions:-
i.	constructor to initialize length and breadth of house.
ii.	Function dimension to input dimension of house.
iii.	Function get_door() to input no. of doors in house.
iv.	Function get_wind() to input no. of windows in house.*/
#include<iostream>
#include<conio.h>
using namespace std;
class house
{
	private:
	int length,breadth,doors,windows;
	public:
	 house()
	 {
		length=40;
		breadth=10;
	 }
	 void dimension()
	 {
		cout<<"Enter the length of house: ";
		cin>>length;
		cout<<"Enter the breadth of house: ";
		cin>>breadth;
	 }
	 void get_door()
	 {
		cout<<"Enter the no. of doors in house: ";
		cin>>doors;
	 }
	 void get_wind()
	 {
		cout<<"Enter the no. of windows in house: ";
		cin>>windows;
	 }
	 void display()
	 {
		cout<<"Dimensions of house: ";
		cout<<length<<"*"<<breadth;
		cout<<"\nNo. of doors: "<<doors;
		cout<<"\nNo. of windows: "<<windows;
	 }
};
int main()
{
	house h;
	h.dimension();
	h.get_door();
	h.get_wind();
	h.display();
	getch();
}


