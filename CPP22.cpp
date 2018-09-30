//Menu driven program that includes: Eligibility Criteria for Voting, Enter ten no. & count no. of even & odd, Exit.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{ 
    	int a[10],op,i,n,codd=0,ceven=0,age;
	char noy;
	menuop:
	cout<<"Enter option for:\n1. Eligibility Criteria for Voting.\n2. Enter Ten no. & Count no. even & odd.\n3. Exit.\n";
	cin>>op;
	switch(op)
	{

		case 1: cout<<"Enter Age of a person : ";
			cin>>age;
			if(age<18)
			{
				cout<<"\nUnder 18 i.e., non-adults are not eligible for voting!!";
			}
			else
			{
				cout<<"\nPerson is adult and is eligible for voting";
			}
			break;
		case 2: cout<<"\nEnter any 10 numbers :\n";
			for(i=0;i<10;i++)
			{
				cin>>a[i];
				if(a[i]%2==0)
				ceven++;
				else
				codd++;
			}
			cout<<"\nThe total even numbers in the list are : "<<ceven;
			cout<<"\nThe total odd numbers in the list are : "<<codd;
			break;
		case 3: exitop:
			cout<<"\nAre you sure you want to exit?? (y/n)\n";
			cin>>noy;
			if(noy=='n'||noy=='N')
			{
				cout<<"\nOk.... going on Menu Options again.\n";
				goto menuop;
			}
			else if(noy=='y'||noy=='Y')
			{
				cout<<"\nOk Take Exit!!";
				goto exit;
			}
			else
			{
				cout<<"\nERROR!!!!.... \n\rPlease select only y/Y or n/N\n";
				goto exitop;
			}
			break;
		default:
			cout<<"\nWrong Option.... this option Doesn't Exist\nPlease select only one of the following option!\n";
			goto exit;
	}
	exit:
	getch();

}
