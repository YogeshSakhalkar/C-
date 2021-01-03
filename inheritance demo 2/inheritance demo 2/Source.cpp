#include<iostream>
using namespace std;
#include<string.h>
class person
{
	char name[20];
	char address[30];
	int age;
public:
	void setName(char* n)
	{
		strcpy(this->name,n);
	}
	void setAddress(char* a)
	{
		strcpy(this->name,a);
	}
	void setAge(int a)
	{
		age=a;
	}
	
	char* getName()
	{
		return this->name;
	}
	
	char* getAddress()
	{
		return this->address;
	}

	int getAge()
	{
		return this->age;
	}
	person()
	{
		cout<<"\nperson default constructor called";
		strcpy(this->name,"name not given");
		strcpy(this->address,"adress not given");
		this->age=0;
	}

	person(char* n,char* a,int age)
	{
		cout<<"\nperson parameterized constructor called";
		strcpy(this->name,n);
		strcpy(this->address,a);
		this->age=age;
	}

	void display()
	{
		cout<<"\nthe name is :"<<name;
		cout<<"\nthe address is :"<<address;
		cout<<"\nthe age is"<<age;
	}
};

class driving_licence : public person
{
	int id;
public:
	void setId(int i)
	{
		this->id=i;
	}

	int getId()
	{
		return id;
	}

	driving_licence() : person()
	{
		cout<<"\ndriving licence defalut constructor";
		this->id=0;
	}

	driving_licence(char*n,char* a,int age,int i) : person(n,a,age)
	{
		this->id=i;
	}

	void display()
	{
		person::display();
		cout<<"\nthe driving licence id is :"<<id;
	}
};

class Aadhaar_card : public person
{
	int id;
public:
	void setId(int id)
	{
		this->id=id;
	}

	int getId()
	{
		return id;
	}

	Aadhaar_card() : person()
	{
		cout<<"\nAadhar card default constructor call";
		this->id=0;
	}

	Aadhaar_card(char* n,char* a,int age,int i) :  person(n,a,age)
	{
		cout<<"\nAadhaar card parameterized constructor call";
		this->id=i;
	}

	void display()
	{
	person :: display();
	cout<<"\nthe Aadhaar card id is :"<<id;
	}
};

class Pan_card : public person
{
	int id;
public:
	void setId(int id)
	{
		this->id=id;
	}
	
	int getId()
	{
		return id;
	}

	Pan_card():person()
	{
		cout<<"\nPan Card default constructor called";
		this->id=0;
	}
	Pan_card(char* n,char* a,int age,int i):person(n,a,age)
	{
		cout<<"\nPan Card parameterized constructor called";
		this->id=i;
	}

	void display()
	{
	person::display();
	cout<<"\nthe Pan Card no is :"<<id;
	}
};

void main()
{
	Aadhaar_card a1;
	a1.display();

	cout<<"\n\n";
	
	Pan_card p1;
	p1.display();

	cout<<"\n\n";
	
	driving_licence d1;
	d1.display();

	cout<<"\n\n";
	driving_licence d2;
	d2.setAge(25);
	d2.setName("the rock");
	d2.setId(619);
	d2.setAddress("Nevada USA");
	d2.display();
}