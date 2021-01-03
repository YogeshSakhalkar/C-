#include<iostream>
using namespace std;
class product
{
	char name[20];
	float price;
	int product_id;
public:
	void setName(char* n)
	{
		strcpy(this->name,n);
	}

	void setPrice(float p)
	{
		this->price=p;
	}

	void setProduct_id(int i)
	{
		this->product_id=i;
	}
	
	char* getName()
	{
		return this->name;
	}

	float getPrice()
	{
		return this->price;
	}

	int getProduct_id()
	{
		return this->product_id;
	}

	void display()
	{
		cout<<"\nthe product name is : "<<name;
		cout<<"\nthe price is : "<<price;
		cout<<"\nthe product id is : "<<product_id;
	}

	product()
	{
		cout<<"\nproduct default construtor called";
		strcpy(name,"name not given");
		this->price=0;
		product_id=0;
	}

	product(char* n,float p,int i)
	{
		cout<<"\nproduct parameterized constructor called";
		strcpy(name,n);
		price=p;
		product_id=i;
	}
};//product class ends here

class pendrive : public product
{
	float memory_capacity;
	float transmission_speed;
public:

	void setMemory_capacity(float mc)
	{
		this->memory_capacity=mc;
	}

	void setTransmission_speed(float Ts)
	{
		this->transmission_speed=Ts;
	}
	

	float getMemory_capacity()
	{
		return this->memory_capacity;
	}

	float getTransmission_speed()
	{
		return this->transmission_speed;
	}

	void display()
	{
		product::display();
		cout<<"\nthe memory_capacity in GB is : "<<memory_capacity;
		cout<<"\nthe transmission_speed in MB is : "<<transmission_speed;

	}

	pendrive():product()
	{
		cout<<"\npendrive default construtor called";
		
		this->memory_capacity=0;
		this->transmission_speed=0;
	}

	pendrive(char* n,float p,int i,float mc,float ts) : product(n,p,i)
	{ 
		cout<<"\npendrive parameterized constructor called";
		memory_capacity=mc;
		transmission_speed=ts;
	}
};//pendrive class ends here

class toothpast : public product
{
	float no_of_gram;
public:

	void setNo_of_gram(float g)
	{
		this->no_of_gram=g;
	}

	float getNo_of_gram()
	{
		return this->no_of_gram;
	}

	void display()
	{
		product::display();
		cout<<"\nthe total gram is : "<<no_of_gram;
	}

	toothpast():product()
	{
		cout<<"\nToothpast default construtor called";
		
		this->no_of_gram=0;
	}

	toothpast(char* n,float p,int i,float grm) : product(n,p,i)
	{ 
		cout<<"\npendrive parameterized constructor called";
		no_of_gram=grm;
	}
};//toothpast class ends here


void main()
{
	toothpast t1;
	t1.display();

	cout<<"\n\n";

	pendrive p1;
	p1.display();

	cout<<"\n\n";

	toothpast t2("colgate",100,56789,400);
	t2.display();

	cout<<"\n\n";
	pendrive p2("sandisk",500,89018,8,25);
	p2.display();

	cout<<"\n\n";
}