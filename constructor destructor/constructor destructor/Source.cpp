#include<iostream>
using namespace std;
class complex
{
	int real;
	int imag;
	int *ptr;

public:
	void setImag(int i)
	{
		imag=i;
	}
	void setReal(int r)
	{
		real=r;
	}
	int getReal()
	{
		return real;
	}
	int getImag()
	{
		return imag;
	}
	complex()
	{
		this->imag=0;
		this->real=0;
		this->ptr=new int[5];
	}
	~complex()
	{
		cout<<"\n Destrctor";
		delete[] this->ptr;
	}
};

void main()
{
	complex obj;
	complex *p;
	p=new complex();
	delete p;
}