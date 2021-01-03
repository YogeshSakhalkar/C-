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
	
	void display()
	{
	cout<<"\n the id of user is "<<this->id;
	cout<<"\n the name of user is "<<this->name;
	cout<<"\n the salary is "<<this->salary;
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
void main()
{
	sales_manager s1;
	s1.display();
	cout<<"\n\n";
	sales_manager s2;
	s2.setId(100);
	s2.setName("yogesh");
	s2.setTarget(32);
	s2.setSalary(50000);
	s2.setIncentive(2000);
	s2.display();
}

	
