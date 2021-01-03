
#include<iostream>
using namespace std;
#include<string.h>
class admin
{
	int id;
	char name[25];
	float salary,allowance;

public:
	
	admin(admin&);
	admin(int,char*,float,float);
	admin();

	void setId(int);
	void setName(char*);
	void setSalary(float);
	void setAllowance(float);
	float getSalary();
	float getAllowance();
	char* getName();
	int getId();
	void display();
};

void storeValue(admin*);
void printValue(admin);
ostream& operator<<(ostream&,admin&);
void operator>>(istream&,admin&);


void main()
{
	admin a1(10,"sachin",10,10);
	a1.display();
	cout<<"\n\n";
	admin a2;
	cin>>a2;
	cout<<a2;

	//admin a3;
	//storeValue(&a3);
	//printValue(a3);
	
}

ostream& operator<<(ostream& o,admin& a)
{
	o<<"\nThe id is :"<<a.getId();
	o<<"\nThe name is :"<<a.getName();
	o<<"\nThe salary is  :"<<a.getSalary();
	o<<"\nThe allowance is :"<<a.getAllowance();
	o<<"\nThe total salary is : \n"<<a.getAllowance()+a.getSalary();
	return o;
}

void operator>>(istream& i,admin& a)
{
	int id;
	char name[25];
	float salary,allowance;
	cout<<"\n Enter the id \n";
	i>>id;
	a.setId(id);
	
	cout<<"\n Enter the name \n";
	i>>name;
	a.setName(name);
	
	cout<<"\n Enter the salary \n";
	i>>salary;
	a.setSalary(salary);
	
	cout<<"\n Enter the allowance \n";
	i>>allowance;
	a.setAllowance(allowance);
}

void storeValue(admin *a2)
{
	int id;
	char name[25];
	float salary,allowance;
	cout<<"\n Enter the id \n";
	cin>>id;
	a2->setId(id);
	cout<<"\n Enter the name \n";
	cin>>name;
	a2->setName(name);
	cout<<"\n Enter the salary \n";
	cin>>salary;
	a2->setSalary(salary);
	cout<<"\n Enter the allowance \n";
	cin>>allowance;
	a2->setAllowance(allowance);
}

void printValue(admin a2)
{
	cout<<"\n The id is : \n",a2.getId();
	cout<<"\n The name is : \n",a2.getName();
	cout<<"\n The salary is  : \n",a2.getSalary();
	cout<<"\n The allowance is : \n",a2.getAllowance();
	cout<<"\n The total salary is : \n",a2.getAllowance()+a2.getSalary();
}

	void admin :: setId(int input)
	{
		this->id=input;
	}
	
	void admin :: setName(char* input)
	{
		strcpy(this->name,input);
	}
	
	void admin :: setSalary(float salary)
	{
		this->salary=salary;
	}
	
	void admin :: setAllowance(float input)
	{
		this->allowance=input;
	}
	
	int admin :: getId()
	{
		return this->id;
	}
	
	char* admin :: getName()
	{
		return this->name;
	}
	
	float admin :: getSalary()
	{
		return this->salary;
	}

	float admin :: getAllowance()
	{
		return this->allowance;
	}

	void admin :: display()
	{
		cout<<"\n The id is : "<<this->getId();
		cout<<"\n The name is :"<<this->name;
		cout<<"\n The salary is  : "<<this->salary;
		cout<<"\n The allowance is : "<<this->allowance;
		cout<<"\n The total salary is : "<<this->salary+this->allowance;
	}
	
	admin :: admin()
	{
		cout<<"\n default constructor";
	}
	
	admin :: admin(int i,char*n,float s,float a)
	{
		cout<<"\n parameterized constructor";
		this->id=i;
		strcpy_s(this->name,n);
		this->salary=s;
		this->allowance=a;
	}
	
	admin :: admin(admin& a)
	{
		cout<<"\n copy constructor";
		this->id=a.id;
		strcpy_s(this->name,a.name);
		this->salary=a.salary;
		this->allowance=a.allowance;
	}