//Derive two sub-classes, door and windows from the class house. Two derived classes have methods to calculate total cost of doors/windows.
#include<iostream>
#include<conio.h>
using namespace std;
class house
{
	public:
	int length,breadth,doors,window;
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
		cin>>window;
	 }
	 void display()
	 {
		cout<<"Dimensions of house: ";
		cout<<length<<"*"<<breadth;
	 }
};
class door:public house
{
	private:
	 long tcd,cd;
	public:
	 door()
	 {
		cd=250;
	 }
	 void co_of_doors()
	 {
		tcd=cd*doors;
		cout<<"\nNo. of doors: "<<doors;
		cout<<"\nTotal cost of doors: "<<tcd;
	 }
};
class windows:public house
{
	private:
	 long tcw,cw;
	public:
	 windows()
	 {
		cw=200;
	 }
	 void co_of_windows()
	 {
		tcw=cw*window;
		cout<<"\nNo. of windows: "<<window;
		cout<<"\nTotal cost of windows: "<<tcw;
	 }
};
int main()
{
	door d;
	windows w;
	w.dimension();
	d.get_door();
	w.get_wind();
	w.display();
	d.co_of_doors();
	w.co_of_windows();
	getch();
}

