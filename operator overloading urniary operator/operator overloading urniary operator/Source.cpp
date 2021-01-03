#include<iostream>
using namespace std;
class complex
{
	int real;
	int image;

public:
	void setReal(int i)
	{
		this->real=i;
	}

	void setImage(int r)
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
		cout<<this->getImage()<<"\t"<<this->getReal();
	}
	complex operator++(int a)
	{
		complex temp;
		temp.real=this->real++;
		temp.image=this->image++;
		return temp;
	}
	complex operator++()
	{
		complex temp;
		temp.real=++this->real;
		temp.image=++this->image;
		return temp;
	}
};

void main()
{
	complex c1;
	c1.setImage(10);
	c1.setReal(20);
	c1.display();
	cout<<"\n";

	complex c2;
	c2=c1++; // 1st assignment then increment
	c1.display();
	cout<<"\n";
	c2.display();

	complex c3;
	c3=++c1;  // 1st increment the assignment
	c1.display();
	cout<<"\n";
	c3.display();
	cout<<"\n\n";
}