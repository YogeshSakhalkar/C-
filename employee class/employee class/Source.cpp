#include<iostream>
using namespace std;
#include<string.h>
class employee
{
	int id;
	char name[20];
	float salary;

public:
	employee();
	employee(int ,char* ,float );
	employee(employee&);
	

	void setId(int);
	void setName(char*);
	void setSalary(float);
	int getId();
	char* getName();
	float getSalary();
	void display();

};

void storevalue(employee *);
void printvalue(employee );
void operator>>(istream& ,employee& );
ostream& operator<<(ostream& ,employee& );
void main()
{
	employee e1;
	e1.setId(101);
	e1.setName("yog");
	e1.setSalary(10000);
	e1.display();
	cout<<"\n\n";

	employee e2;
	cin>>e2;
	//storevalue(&e2);
	//printvalue(e2);
	cout<<"\n\n";

	employee e3(10,"fir",9000);
	//e3.display();
	cout<<e2<<e3;
}

void storevalue(employee* ptr)
{
	int id;
	char name[25];
	float salary;
	cout<<"\n Enter the id :\n";
	cin>>id;
	ptr->setId(id);
	cout<<"\n Enter the name :\n";
	cin>>name;
	ptr->setName(name);
	cout<<"\n Enter the salary :";
	cin>>salary;
	ptr->setSalary(salary);
}

void printvalue(employee e2)
{
	cout<<"\n\n";
	cout<<"\n The id is %d",e2.getId();
	cout<<"\n The name is %s",e2.getName();
	cout<<"\n The salary is %f",e2.getSalary();
}

	void employee :: setId(int input)
	{
		 this->id=input;
	}

	void employee :: setName(char* input)
	{
		strcpy_s(this->name,input);
	}

	void employee :: setSalary(float input)
	{
		this->salary=input;
	}

	int employee :: getId()
	{
		return this->id;
	}

	char* employee :: getName()
	{
		return this->name;
	}

	float employee :: getSalary()
	{
		return this->salary;
	}
	
	void employee :: display()
	{
	cout<<"\n the id of user is "<<this->id;
	cout<<"\n the name of user is "<<this->name;
	cout<<"\n the salary is "<<this->salary;
	}

	employee :: employee()
	{
		cout<<"\n Default constructor";
	}
	
	employee :: employee(int i,char* n,float s)
	{
		cout<<"\n parameterized constructor";
		this->id=i;
		this->salary=s;
		strcpy(this->name,n);
	}
	
	employee ::employee(employee& o)
	{
		cout<<"copy constuctor";
		this->id=o.id;
		this->salary=o.salary;
		strcpy(this->name,o.name);
	}
	
	ostream& operator<<(ostream& o,employee& e)
	{
		o<<"\nthe id is :"<<e.getId();
		o<<"\nthe name is :"<<e.getName();
		o<<"\nthe salary is :"<<e.getSalary();
		return o;
	}

	void operator>>(istream& i,employee& e)
	{
		int id;
		char name[25];
		float salary;
		cout<<"\nenter the name :";
		cin>>name;
		e.setName(name);
		cout<<"\nenter the id :";
		i>>id;
		e.setId(id);
		cout<<"\nenter the salary :";
		i>>salary;
		e.setSalary(salary);
	}