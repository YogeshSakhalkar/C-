#include<iostream>
using namespace std;
class defence
{
public:

	virtual void display()
	{
		cout<<"\n Attack";
	}
};

class Airforce : public defence
{
public:
	void display()
	{
		defence::display();
			cout<<"\n Air force attack from air";
	}
};

class Navy :public defence
{
public:
	void display()
	{
		defence::display();
		cout<<"\n Navy attack from sea";
	}
};

class Army : public defence
{
public:
	void display()
	{
		defence::display();
		cout<<"\nArmy attack from ground";
	}
};

void main()
{
	defence *d1;
	
	Airforce a1;
	d1=&a1;
	d1->display();

	cout<<"\n\n";

	Navy n1;
	d1=&n1;
	d1->display();

	cout<<"\n\n";

	Army ar1;
	d1=&ar1;
	d1->display();

		cout<<"\n\n";
}