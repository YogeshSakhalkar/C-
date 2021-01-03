#include<iostream>
using namespace std;
class circle
{
	float radius;
public:
	void setRadius(int r)
	{
		this->radius=r;
	}

	float getRadius()
	{
		return radius;
	}

	void display()
	{
		cout<<getRadius()<<"\n";
	}
	circle()
	{
		cout<<"default constructor \n";
		this->radius=0;
	}
	circle(float r)
	{
		cout<<"parameterized constructor \n";
		this->radius=r;
	}
};

void main()
{
	float radius;
	circle c1;
	c1.display();
	cout<<"\n enter the radius \n";
	cin>>radius;
	circle c2(radius);
	c2.display();

}