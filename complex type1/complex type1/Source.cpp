#include<iostream>
using namespace std;
class complex
{
	int real;
	int image;
public:
	void setReal(int input)
	{
		real=input;
	}
	void setImage(int input)
	{
		image=input;
	}
	int getReal()
	{
		return real;
	}
	int getImage()
	{
		return image;
	}
	void display()
	{
		printf("\n%d \t %d\n",this->getImage(),this->getReal());
	}
	complex add(complex c2)
	{
		complex temp;
		temp.real=this->real+c2.real;
		temp.image=this->getImage()+c2.image;
		return temp;
	}
};
void main()
{
	complex c1;
	c1.setReal(10);
	c1.setImage(10);
	c1.display();

	complex c2;
	c2.setImage(2);
	c2.setReal(2);
	c2.display();

	complex c3;
	c3=c1.add(c2);
	c3.display();
}