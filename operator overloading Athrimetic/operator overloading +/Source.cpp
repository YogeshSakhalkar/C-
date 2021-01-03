#include<iostream>
using namespace std;
class complex
{
	float image;
	float real;
public:
	void setImage(float i)
	{
		this->image=i;
	}
	void setReal(float r)
	{
		this->real=r;
	}
	float getReal()
	{
		return real;
	}
	float getImage()
	{
		return image;
	}
	void display()
	{
		cout<<this->getImage()<<"\t"<<this->getReal()<<"\n";
	}
	complex operator+(int a)
	{
		complex temp;
		temp.real=this->real+a;
		temp.image=this->image+a;
		return temp;
	}
	complex operator+(complex c2)
	{
		
		complex temp;
		temp.real=this->real+c2.real;
		temp.image=this->image+c2.image;
		return temp;
	}

	complex operator-(complex c12)
	{
		complex temp;
		temp.real=this->real-c12.real;
		temp.image=this->image-c12.image;
		return temp;
	}

	complex operator-(int a)
	{
		complex temp;
		temp.real=this->real-a;
		temp.image=this->image-a;
		return temp;
	}

	complex operator*(complex c22)
	{
		complex temp;
		temp.real=this->real*c22.real;
		temp.image=this->image*c22.image;
		return temp;
	}

	complex operator*(int a)
	{
		complex temp;
		temp.real=this->real*a;
		temp.image=this->image*a;
		return temp;
	}

	complex operator/(int a)
	{
		complex temp;
		temp.real=this->real/a;
		temp.image=this->image/a;
		return temp;
	}

	complex operator/(complex c32)
	{
		complex temp;
		temp.real=this->real/c32.real;
		temp.image=this->image/c32.image;
		return temp;
	}
};

void main()
{
	cout<<"The addition is \n";
	complex c1,c2;
	c1.setImage(10);
	c1.setReal(10);
	c1.display();
	c2.setImage(2);
	c2.setReal(2);
	c2.display();

	complex c3;
	c3=c1.operator+(c2);
	c3.display();

	complex c4;
	c4=c3.operator+(5);
	c4.display();

	cout<<"The subtraction is \n";
	complex c11,c12;
	c11.setImage(10);
	c11.setReal(10);
	c11.display();
	c12.setImage(5);
	c12.setReal(5);
	c12.display();

	complex c13;
	c13=c11.operator-(c12);
	c13.display();

	complex c14;
	c14=c13.operator-(5);
	c14.display();

	cout<<"The multiplication is \n";
	complex c21,c22;
	c21.setImage(10);
	c21.setReal(10);
	c21.display();
	c22.setImage(5);
	c22.setReal(5);
	c22.display();

	complex c23;
	c23=c21.operator*(c22);
	c23.display();

	complex c24;
	c24=c23.operator*(5);
	c24.display();

	cout<<"The division is \n";
	complex c31,c32;
	c31.setImage(50);
	c31.setReal(50);
	c31.display();
	c32.setImage(5);
	c32.setReal(5);
	c32.display();

	complex c33;
	c33=c31.operator/(c32);
	c33.display();

	complex c34;
	c34=c33.operator/(5);
	c34.display();
}