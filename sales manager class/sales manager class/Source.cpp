#include<iostream>
using namespace std;
#include<string.h>
class sales_manager
{
	int id;
	char name[25];
	float salary;
	float incentive;
	int target;
public:
	sales_manager(sales_manager&);
	sales_manager(int , char* ,float ,float ,int );
	sales_manager();

	void setId(int);
	void setSalary(float);
	void setName(char*);
	void setIncentive(float);
	void setTarget(int);
	int getId();
	float getSalary();
	char* getName();
	float getIncentive();
	int getTarget();
	void display();

};
void storeData(sales_manager*);
void printData(sales_manager);
ostream& operator<<(ostream&,sales_manager&);
void operator>>(istream&,sales_manager&);
void main()
{
	sales_manager sm1(10,"asap",10,10,10),sm2;

	sm1.display();
	cout<<"\n\n";
	cin>>sm2;
	cout<<sm2;
	//storeData(&sm2);
	//printData(sm2);
}

void storeData(sales_manager* sm)
{
	int id,target;
	float salary,incentive;
	char name[20];
	cout<<"\n Enter the id :";
	cin>>id;
	sm->setId(id);
	cout<<"\n Enter the name :";
	cin>>name;
	sm->setName(name);
	cout<<"\n Enter the salary :";
	cin>>salary;
	sm->setSalary(salary);
	cout<<"\n Enter the target :";
	cin>>target;
	sm->setTarget(target);
	cout<<"\n Enter the incentive";
	cin>>incentive;
	sm->setIncentive(incentive);
}

void printData(sales_manager sm)
{
	cout<<"\n The id is : \n",sm.getId();
	cout<<"\n The name is : \n",sm.getName();
	cout<<"\n The salary is : \n",sm.getSalary();
	cout<<"\n The incentive is : \n",sm.getIncentive();
	cout<<"\n The target is : \n",sm.getTarget();
	cout<<"\n After incentive the salary is ",sm.getSalary()+sm.getIncentive();
}


	void sales_manager :: setId(int input)
	{
		 this->id=input;
	}

	void sales_manager :: setSalary(float input)
	{
		this->salary=input;
	}
	
	void sales_manager :: setName(char* input)
	{
		strcpy_s(this->name,input);
	}
	
	void sales_manager :: setIncentive(float input)
	{
		this->incentive=input;
	}
	
	void sales_manager :: setTarget(int input)
	{
		this->target=input;
	}
	
	int sales_manager :: getId()
	{
		return this->id;
	}
	
	float sales_manager :: getSalary()
	{
		return this->salary;
	}
	
	char* sales_manager :: getName()
	{
		return this->name;
	}
	
	int sales_manager :: getTarget()
	{
		return this->target;
	}
	
	float sales_manager :: getIncentive()
	{
		return this->incentive;
	}

	void sales_manager :: display()
	{
		cout<<"\n The id is : %d\n"<<this->id;
		cout<<"\n The name is : %s\n"<<this->name;
		cout<<"\n The salary is : %f\n"<<this->salary;
		cout<<"\n The incentive is : %f\n"<<this->incentive;
		cout<<"\n The target is : %d\n"<<this->target;
		cout<<"\n After incentive the salary is %f"<<this->incentive+this->salary;
	}

	sales_manager :: sales_manager()
	{
		printf("\n Default parameterized");
	}
	
	sales_manager :: sales_manager(int i, char* n,float s,float incent,int t)
	{
		printf("\n parameterized constructor");
		this->id=i;
		strcpy(this->name,n);
		this->salary=s;
		this->incentive=incent;
		this->target=t;
	}
	
	sales_manager :: sales_manager(sales_manager& s)
	{
		printf("\n copy constructor");
		this->id=s.id;
		strcpy(this->name,s.name);
		this->salary=s.salary;
		this->incentive=s.incentive;
		this->target=s.target;
	}

	ostream& operator<< (ostream& o, sales_manager& s)
	{
		o<<"\nthe id is :"<<s.getId();
		o<<"\nthe name is :"<<s.getName();
		o<<"\nthe salary is :"<<s.getSalary();
		o<<"\nthe incentive is :"<<s.getIncentive();
		o<<"\nthe target is :"<<s.getTarget();
		o<<"\nthe total salary is :"<<s.getSalary()+s.getIncentive();
		return o;
	}

	void operator>>(istream& i,sales_manager& s)
	{
		int id,target;
		float salary,incentive;
		char name[20];
		cout<<"\n Enter the id :";
		i>>id;
		s.setId(id);
		cout<<"\n Enter the name :";
		i>>name;
		s.setName(name);
		cout<<"\n Enter the salary :";
		i>>salary;
		s.setSalary(salary);
		cout<<"\n Enter the target :";
		i>>target;
		s.setTarget(target);
		cout<<"\n Enter the incentive";
		i>>incentive;
		s.setIncentive(incentive);

	}