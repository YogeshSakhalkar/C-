using namespace std;
#include<iostream>
#include<string.h>

class employee
{
	int id;
	char name[20];
	float salary;

public:

	employee()
	{
		cout<<"\n employee default constructor";
		this->id=0;
		strcpy(this->name,"not given");
		this->salary=0;
	}

	employee(int i,char* n,float s)
	{
		cout<<"\n employee parameterized constructor";
		this->id=i;
		strcpy(this->name,n);
		this->salary=s;
	}
	
	void setId(int id)
	{
		this->id=id;
	}
	
	void setName(char* n)
	{
		strcpy(this->name,n);
	}

	void setSalary(float s)
	{
		this->salary=s;
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
		cout << "\n Id is :" << this->id;
		cout << "\n Name of employee is :" << this->name;
		cout << "\n salary  is :" << this->salary;
	}

	virtual float calSalary()
	{
		return this->salary;
	}

};//emp ends here

class SalesManager : public employee
{
	float incentive;
	int target;

public:

	SalesManager () : employee()
	{
		cout<<"\n sales manager default constrctor";
		this->target=0;
		this->incentive=0;
	}

	SalesManager(int i,char* n,float s,float in,int t) : employee(i,n,s)
	{
		cout<<"\n sales manager parameterized constructor";
		this->incentive=in;
		this->target=t;
	}

	void setIncenitve(float in)
	{
		this->incentive = in;
	}
	
		void setTarget(int t)
	{
		this->target = t;
	}
	
	int getTarget()
	{
		return  this->target;
	}

	float getIncentive()
	{
		return  this->incentive;
	}

	void display()
	{
		employee :: display();
		cout<<"\n incentive is :"<<this->incentive;
		cout<<"\n target is :"<<this->target;
	}

	float calSalary()
	{
		return this->getSalary() + this->incentive;
	}
};//sm ends here

class Admin : public employee //1st step //is-a
{
	float allowance;
public:
	Admin() :employee()
	{
		cout << "\nAdmin Defualt  constructor called";
		this->allowance = 0;
	}
	Admin(int i, char* nm, float s, float a) :employee(i, nm, s)
	{
		cout << "\nAdmin Parameterised  constructor called";
		this->allowance = a;
	}

	void setAllowance(float a)
	{
		this->allowance = a;
	}
	float getAllowance()
	{
		return this->allowance;
	}
	void display()
	{
		employee::display();
		cout << "\n allowance is " << this->allowance;
	}

	float calSalary()
	{
		return this->getSalary() + this->allowance;
	}
};//class Admin ends here

void allEmpDetails(employee*);
void main()
{
	allEmpDetails(new SalesManager(101,"yog",30000,1000,40));
	cout<<"\n\n";
	allEmpDetails(new Admin(102,"sal",2000,100));
	cout<<"\n\n";
}
void allEmpDetails(employee* ep)
{
	cout<<"\nthe name is : "<<ep->getName();
	cout<<"\n the is is : "<<ep->getId();
	cout<<"\n the salary is :"<<ep->getSalary();
	cout<<"\n the calculated salarys is : "<<ep->calSalary();

	SalesManager* sp =dynamic_cast<SalesManager*>(ep);
	if(sp!=NULL)
	{
		cout<<"\n incentive is : "<<sp->getIncentive();;
	}

	Admin* ap = dynamic_cast <Admin*>(ep);
	if(ap!=0)
	{
		cout<<"\n allowance is : "<<ap->getAllowance();
	}
}


void allEmpDetails1(employee* ep)
{
	cout<<"\n";
	cout<<"\n the name is : "<<ep->getName();
	cout<<"\n the id is : "<<ep->getId();
	cout<<"\n the salary is : "<<ep->getSalary();
	
	cout<<"\n the calculeted salary is : "<<ep->calSalary();

	if(strcmp(typeid(*ep).name(),"class SalesManager")==0)//rtti
	{
		SalesManager* sp =(SalesManager*)ep;//blind casting
		cout<<"\n incentive is "<<sp->getIncentive();
	}

	if(strcmp(typeid(*ep).name(),"class Admin")==0)
	{
		Admin* ap = (Admin*)ep;//blind cating
		cout<<"\n allowance is "<<ap->getAllowance();
	}
}