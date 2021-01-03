#include<iostream>
using namespace std;
class complex
{
	int real;
	int imag;
public:
	complex();
	complex(int,int);
	int getReal();
	int getImag();
	void setImag(int);
	void setReal(int);
	void display();

	friend void operator>>(istream& ,complex& );
	friend	ostream& operator<<(ostream& ,complex& );
};
complex :: complex()
{
	cout<<"\n default const";
	real=0;
	imag=0;
}

complex :: complex(int r,int i)
{
	cout<<"\n parameterized const";
	real=r;
	this->imag=i;
}

void complex :: setReal(int r)
{
	this->real=r;
}

void complex :: setImag(int i)
{
	this->imag=i;
}

int complex :: getReal()
{
	return this->real;
}

int complex :: getImag()
{
	return this->imag;
}

void complex :: display()
{
	cout<<"\n\n";
	cout<<"\n the imag is : "<<imag;
	cout<<"\n the real is :"<<getReal();
}

void main()
{
	complex c1;
	c1.display();
	cout<<"\n\n";
	
	complex c2(10,20);
	cout<<c2;
	cout<<"\n\n";

	cin>>c1;
	cout<<c1;
}

ostream& operator<<(ostream& out,complex& c)
{
	cout<<"\n the real is : " <<c.getReal();
	cout<<"\n the imag is : "<<c.getImag();
	return out;
}

void operator>>(istream& i,complex& c)
{
	int im,r;
	cout<<"\n enter the imag value : ";
	cin>>im;
	c.setImag(im);

	cout<<"\n enter the real value : ";
	cin>>r;
	c.setReal(r);
}