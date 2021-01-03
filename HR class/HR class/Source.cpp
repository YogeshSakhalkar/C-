#include<iostream>
using namespace std;
#include<string.h>
class HR
{
	int id;
	char name[25];
	float salary,commission;
public:
	HR(HR& );
	HR(int ,char* ,float ,float );
	HR();

	void setId(int);
	void setName(char*);
	void setSalary(float);
	void setCommission(float);
	int getId();
	char* getName();
	float getSalary();
	float getCommission();
	void display();

};

void storeValues (HR*);
void printValues (HR);
ostream& operator<< (ostream&, HR&);
void operator>>(istream&, HR&);
void main()
{
	HR h1(15,"yog",450,450);
	HR h2;
	
	//h1.display();
	cin>>h2;
	cout<<h2<<h1;
	//storeValues(&h2);
	//printValues(h2);
}

void storeValues(HR *h2)
{
	int id;
	char name[25];
	float salary,commission;
	cout<<"\n enter the name :";
	cin>>name;
	h2->setName(name);
	cout<<"\n enter the id :";
	cin>>id;
	h2->setId(id);
	cout<<"\n enter the salary :";
	cin>>salary;
	h2->setSalary(salary);
	cout<<"\n enter the commission :";
	cin>>commission;
	h2->setCommission(commission);
}
void printValues(HR h2)
{
	cout<<"\n The id is : "<<h2.getId();
	cout<<"\n The name is : %d"<<h2.getName();
	cout<<"\n The salary is : %d"<<h2.getSalary();
	cout<<"\n The commission is : %d"<<h2.getCommission();
	cout<<"\n After combining salary and commission \n The total salary is :"<<h2.getSalary()+h2.getCommission();
}


	void HR :: setId(int input)
	{
		this->id=input;
	}
	
	void HR :: setName(char* input)
	{
		strcpy_s(this->name,input);
	}
	
	void HR :: setSalary(float input)
	{
		this->salary=input;
	}
	
	void HR :: setCommission(float input)
	{
		this->commission=input;
	}
	
	int HR :: getId()
	{
		return this->id;
	}
	
	char* HR :: getName()
	{
		return this->name;
	}

	float HR :: getSalary()
	{
		return this->salary;
	}
	float HR :: getCommission()
	{
		return this->commission;
	}

	void HR :: display()
	{
		cout<<"\n The id is : "<<this->id;
		cout<<"\n The name is : "<<this->name;
		cout<<"\n The salary is : "<<this->salary;
		cout<<"\n The commission is : "<<this->commission;
		cout<<"\n After combining salary and commission \n The total salary is :"<<this->salary+this->commission;
	}

	HR :: HR()
	{
		printf("\n Default constructor");
	}
	
	HR :: HR(int i,char* n,float s,float c)
	{
		printf("\n parameterized constructor");
		this->id=i;
		strcpy_s(this->name,n);
		this->salary=s;
		this->commission=c;
	}
	
	HR :: HR(HR& o)
	{
		printf("\n copy constructor");
		this->id=o.id;
		strcpy_s(this->name,o.name);
		this->salary=o.salary;
		this->commission=o.commission;
	}

	ostream& operator<<(ostream& o,HR& h)
	{
		o<<"\n The id is : "<<h.getId();
		o<<"\n The name is : "<<h.getName();
		o<<"\n The salary is :"<<h.getSalary();
		o<<"\n The commission is : "<<h.getCommission();
		o<<"\n After combining salary and commission \n The total salary is :"<<h.getSalary()+h.getCommission();
		return o;
	}

	void operator>>(istream& i,HR& h)
	{
		int id;
		char name[25];
		float salary,commission;
		cout<<"\n enter the name :";
		i>>name;
		h.setName(name);
		cout<<"\n enter the id :";
		i>>id;
		h.setId(id);
		cout<<"\n enter the salary :";
		i>>salary;
		h.setSalary(salary);
		cout<<"\n enter the commission :";
		i>>commission;
		h.setCommission(commission);
	}