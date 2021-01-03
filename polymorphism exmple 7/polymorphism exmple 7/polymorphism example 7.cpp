#include<iostream>
using namespace std;

class shape
{
	float area;
	char shape_name[20];

public:
	shape()
	{
		cout << "\nShape Default Constructor Called:";
		strcpy(this->shape_name, "not given");
	}

	shape(char* c)
	{
		cout << "\nShape Parameterised Constructor Called:";
		strcpy(this->shape_name, c);
	}

	void setColor(char* c)
	{
		strcpy(this->shape_name, c);
	}
	char* getColor()
	{
		return this->shape_name;
	}
	void setArea(float a)
	{
		this->area = a;
	}

	float getArea()
	{
		return this->area;
	}

	virtual void display()
	{
		cout << "\n shape name is : " << this->shape_name;
	}
	virtual float AreaCalc()
	{
		return this->area;
	}
};

class rectangle :public shape
{
	float len;
	float breadth;
public:
	rectangle() :shape()
	{
		cout << "\nRectangle Default constructor Called: ";
		this->len = 0.0;
		this->breadth = 0.0;
	}
	rectangle(char*c,float l,float b) :shape(c)
	{
		cout << "\nRectangle Parameterised constructor Called: ";
		this->len =l;
		this->breadth = b;
	}

	void setLenght(float l)
	{
		this->len = l;
	}
	void setBreadth(float b)
	{
		this->breadth = b;
	}

	float getLength()
	{
		return this->len;
	}
	float getBreadth()
	{
		return this->breadth;
	}
	void display()
	{
		shape::display();
		cout << "\nLenght is:" << this->len;
		cout << "\nBreadth is:" << this->breadth;
	}
	float AreaCalc()
	{
		return this->len*this->breadth;
	}
};


class circle :public shape
{
	float radius;
public:
	circle () : shape()
	{
		cout << "\nCircle Default constructor Called: ";
		this->radius=3.14;
	}
	circle(char*c, float r) :shape( c)
	{
		cout << "\nCicle Parameterised constructor Called: ";
		this->radius = r;
	}

	void setRadius(float r)
	{
		this->radius = r;
	}
	float getRadius()
	{
		return this->radius;
	}
	void display()
	{
		shape::display();
		cout << "\nRadius is:" << this->radius;
	}
	float AreaCalc()
	{
		return 3.14*this->radius*this->radius;
	}
};


void main()
{
	shape* sp;
	rectangle r1("rectangle", 12, 12);
	sp = &r1;
	sp->display();
	cout << "\nTotal area is:" << sp->AreaCalc();
	cout << "\n\n";

	circle c1("circle", 7);
	sp = &c1;
	sp->display();
	cout << "\nTotal area is:" << sp->AreaCalc();
	cout << "\n\n";
}