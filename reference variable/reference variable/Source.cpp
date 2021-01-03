#include<iostream>
using namespace std;
class complex
{
	int real;
	int imag;
public:
	complex()
	{
		cout<<"\n Default Constructor";
	}
	complex(int x,int y)
	{
		cout<<"\n Parameterized constructor";
		this->real=x;
		this->imag=y;
	}
	complex(complex& c)
	{
		cout<<"\n copy constuctor";
		this->real=c.real;
		this->imag=c.imag;
	}
	void setReal(int r)
	{
		this->real=r;
	}
	void setImag(int i)
	{
		this->imag=i;
	}
	int getreal()
	{
		return this->real;
	}
	int getImag()
	{
		return this->imag;
	}
	void diplay()
	{
		cout<<"\n The imag value is : "<<this->getImag();
		cout<<"\n The Real value is : "<<getreal();
		cout<<"\n\n";
	}
};
void myfun(complex&);
void main()
{
	complex c1;
	complex c2(10,20);
	c2.diplay();
	myfun(c2);
	c2.diplay();
}
void myfun(complex& c1)
{
	c1.setImag(11);
	c1.setReal(22);
}





/*void myswap(int&,int&);
void main()
{
	int a=10;
	int b=20;
	cout<<"\n Before";
	cout<<"\nThe A value is"<<a;
	cout<<"\nThe B value is"<<b;
	myswap(a,b);
	cout<<"\nAfter";
	cout<<"\nThe A value is"<<a;
	cout<<"\nThe B value is"<<b;
}
void myswap(int& a,int&b)
{
	int t;
	t=a;
	a=b;
	b=t;
}*/