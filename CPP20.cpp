/*Program to create a base class student having data members:-
a)	roll_no
b)	name
c)	course
Derive a subclass test having data members to input marks of 3 subjects, derive another subclass result having data members & member functions to calculate total marks. Provide functions get_data() &put_data() in each class to input values and display them using multilevel inheritance.*/
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class student
{
	public:
	int roll_no;
	 char name[30],course[20];
	 void get_data()
	 {
		cout<<"Enter the roll no.: ";
		cin>>roll_no;
		cout<<"Enter the name: ";
		gets(name);
		cout<<"Enter the course: ";
		gets(course);
	 }
	 void put_data()
	 {
		cout<<"Roll no.: "<<roll_no;
		cout<<"\nName: ";
		puts(name);
		cout<<"Course: ";
		puts(course);
	 }
};
class test:public student
{
	public:
	int s1,s2,s3;
	 void get_data1()
	 {
		cout<<"Enter the marks of 3 subjects:\n";
		cin>>s1>>s2>>s3;
	 }
	 void put_data1()
	 {
		cout<<"Marks in 3 subjects: ";
		cout<<s1<<"  "<<s2<<"  "<<s3;
	 }
};
class result:public test
{
	public:
	int t_marks;
	 void get_data2()
	 {
		t_marks=s1+s2+s3;
	 }
	 void put_data2()
	 {
		cout<<"\nTotal marks: "<<t_marks;
	 }
};
int main()
{
	result r;
	r.get_data();
	r.get_data1();
	r.get_data2();
	r.put_data();
	r.put_data1();
	r.put_data2();
	getch();
}

