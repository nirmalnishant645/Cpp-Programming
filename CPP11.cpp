//Design and implement the class account which contain the private member to store acc_no and bal_amt and show default constructor and use concept of destructor.
#include<iostream>
#include<conio.h>
using namespace std;
class account
{
	private:
		int acc_no, bal_amt;
	public:
		char n;
		account()
		{
			acc_no=3505;
			bal_amt=500;
			cout<<"Do you want to enter(y/n)";
			cin>>n;
			if(n=='y')
			{
				cout<<"Enter the account no.: ";
				cin>>acc_no;
				cout<<"Enter the balamce amount: ";
				cin>>bal_amt;
				cout<<"Account no.: "<<acc_no<<"\nBalance amount: "<<bal_amt;
			}
			if(n=='n')
			{
				cout<<"Account no:"<<acc_no<<"\nBalance amount:"<<bal_amt;
			}
		}
		~account()
		{
		}
};
int main()
{
	account a;
	getch();
}

