//Define a class cont with a integer static data member cnt to store the no. of objects active, a constructor function to increment cnt, a destructor function to decrement cnt and a static function showcnt() to display the value of cnt at that instance.
#include<iostream>
#include<conio.h>
using namespace std;
class cont
{
	static int cnt;
	public:
	cont()
	 {
		++cnt;
	 }
	 ~cont()
	 {
		cnt--;
	 }
	 static void showcnt()
	 {
		cout<<"Count="<<cnt;
		cout<<endl;
	 }
};
int cont::cnt=2;
int main()
{
	cont c1;
	cont::showcnt();
	cont c2;
	cont::showcnt();
	cont c3;
	cont::showcnt();
	getch();
}

