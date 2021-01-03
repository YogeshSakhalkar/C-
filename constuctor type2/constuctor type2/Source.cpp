#include<iostream>
using namespace std;
class complex
{
	int real;
	int image;
public:
	complex() //default constuctor
	{
		this->real=0;
		this->image=0;
	}
	complex(int a,int b) //parameterized constructor
	{
		this->real=a;
		this->image=b;
	}
	void setImage(int i)
	{
		this->image=i;
	}
	void setReal(int r)
	{
		this->real=r;
	}
	int getImage()
	{
		return this->image;
	}
	int getReal()
	{
		return this->real;
	}
	void display()
	{
		cout<<this->getImage()<<"\t"<<this->getReal()<<"\n";
	}
};

void main()
{
	complex c1;
	c1.setImage(10);
	c1.setReal(20);
	c1.display();

	complex c2(10,20);
	c2.display();
}