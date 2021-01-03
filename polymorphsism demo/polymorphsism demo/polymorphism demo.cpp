#include<iostream>
using namespace std;
#include<string.h>
class employee
{
	int id;
	char name[20];
	float salary;

public:
	void setId(int input)
	{
		 this->id=input;
	}

	void setName(char* input)
	{
		strcpy_s(this->name,input);
	}

	void setSalary(float input)
	{
		this->salary=input;
	}

	int getId()
	{
		return this->id;
	}

	char* getName()
	{
		return this->name;
	}

	float getSalary()
	{
		return this->salary;
	}
	
	virtual void display()
	{
	cout<<"\n the id of user is "<<this->id;
	cout<<"\n the name of user is "<<this->name;
	cout<<"\n the salary is "<<this->salary;
	}

	virtual float calSalary()
	{
		return this->salary;
	}

	employee()
	{
		cout<<"\nemp Default constructor";
		this->id=110;
		this->salary=0;
		strcpy(this->name,"name not given");
	}
	
	employee(int i,char* n,float s)
	{
		cout<<"\nemp parameterized constructor";
		this->id=i;
		this->salary=s;
		strcpy(this->name,n);
	}
	
	employee(employee& o)
	{
		cout<<" emp copy constuctor";
		this->id=o.id;
		this->salary=o.salary;
		strcpy(this->name,o.name);
	}
};

class sales_manager : public employee
{

	float incentive;
	int target;
public:
	void  setIncentive(float input)
	{
		this->incentive=input;
	}
	
	void setTarget(int input)
	{
		this->target=input;
	}

	int  getTarget()
	{
		return this->target;
	}
	
	float  getIncentive()
	{
		return this->incentive;
	}

	void display()
	{
		employee::display();
		cout<<"\n The incentive is : "<<this->incentive;
		cout<<"\n The target is : "<<this->target;
		
	}

	float calSalary()
	{
		return this->getSalary()+this->incentive;
	}

	sales_manager() : employee()
	{
		printf("\nsales manager Default parameterized");
		this->incentive=44;
		this->target=55;
	}
	
	sales_manager(int i, char* n,float s,float incent,int t) : employee(i,n,s)
	{
		printf("\nsales manager parameterized constructor");
		this->incentive=incent;
		this->target=t;
	}
};
class HR : public employee
{
	float commission;
public:

	void setCommssion(float c)
	{
		commission=c;
	}

	float getCommission()
	{
		return commission;
	}

	HR():employee()
	{
		cout<<"\nHR default constrctor called";
		this->commission=0;
	}

	HR(int i,char* n,float s,float c) : employee(i,n,s)
	{
		cout<<"\nHR parameterized constrctor called";
		this->commission=c;
	}

	void display()
	{
		employee::display();
		cout<<"\n the HR commission is :"<<commission;
	}

	float calSalary()
	{
		return this->getSalary()+this->commission;
	}


};
void main()
{
	employee *ep;
	employee e2(100,"shobit",70988);
	ep=&e2;
	ep->display();
	cout<<"\n Calulated salary of emp is :"<< ep->calSalary();
	cout<<"\n\n";
	
	sales_manager s2(101, "Sachin", 34000, 1900, 400);
	ep = &s2;
	ep->display();
	cout<<"\n Calulated salary of emp is :"<< ep->calSalary();
	cout<<"\n\n";

	
	HR h2(101, "Sachin", 34000,1000);
	ep = &h2;
	ep->display();
	cout<<"\n Calulated salary of emp is :"<< ep->calSalary();
	cout<<"\n\n";
}
