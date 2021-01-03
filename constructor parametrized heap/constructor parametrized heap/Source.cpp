#include<iostream>
using namespace std;
class complex
{
	int imag;
	int real;
public:
	void setImag(int i)
	{
		this->imag=i;
	}
	void setReal(int r)
	{
		this->real=r;
	}
	int getReal()
	{
		return real;
	}
	int getImag()
	{
		return this->imag;
	}
	void display()
	{
		cout<<getImag()<<" + "<<getReal()<<"i\n";
	}
	complex()
	{
		cout<<"default constructor \n";
		this->real=0;
		this->imag=0;
	}
	complex(int i,int r)
	{
		cout<<"parameterized constructor \n";
		this->real=r;
		this->imag=i;
	}
};
void main()
{
	complex c1,c2;
	complex *ptr;
	ptr=new complex[5];
	int i;
	for(i=0;i<5;i++)
	{
		//ptr[i].display();
		cout<<ptr[i].getReal()<<"+";
		cout<<ptr[i].getImag()<<"i\n";

	}
	cout<<"\n\n";
	complex *p;
	p=new complex(10,20);
	p->display();
}