#include<iostream>
using namespace std;
class employee
{
	int emp_id;
	char emp_name[20];
	float emp_salary;
public:
	void setEmp_id(int i)
	{
		emp_id=i;
	}

	void setEmp_name(char* n)
	{
		strcpy(emp_name,n);
	}

	void setEmp_salary(float s)
	{
		emp_salary=s;
	}

	int getEmp_id()
	{
		return emp_id;
	}

	char* getEmp_name()
	{
		return emp_name;
	}

	float getEmp_salary()
	{
		return emp_salary;
	}

	employee()
	{
		cout<<"\nEmployee default constrctor called";
		this->emp_id=0;
		strcpy(emp_name,"name not given");
		this->emp_salary=0;
	}

	employee(int i,char* n,float s)
	{
		cout<<"\nEmployee parameterized constrctor called";
		this->emp_id=i;
		strcpy(emp_name,n);
		this->emp_salary=s;
	}

	void display()
	{
		cout<<"\n the employee id is : "<<emp_id;
		cout<<"\n the employee name is : "<<emp_name;
		cout<<"\n the employee name is :"<<emp_salary;
	}
};//employee class ends here

class sales_manager : public employee
{
	int target;
	float incentive;
public:
	void setTarget(int t)
	{
		target=t;
	}

	void setIncentive(float i)
	{
		incentive=i;
	}

	int getTarget()
	{
		return target;
	}

	float getIncentive()
	{
		return incentive;
	}

    sales_manager(): employee()
	{
		cout<<"\nSales Manager default constrctor called";
		this->incentive=0;
		this->target=0;
	}

	sales_manager(int i,char* n,float s,int t,int in) : employee(i,n,s) 
	{
		cout<<"\nSales manager parameterized constrctor called";
		this->target=t;
		this->incentive=in;
	}

	void display()
	{
		employee :: display();
		cout<<"\n the sales target is : "<<target;
		cout<<"\n the sales incentive is : "<<incentive;
	}
};//sales manager class end here

class HR : public sales_manager
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

	HR():sales_manager()
	{
		cout<<"\nHR default constrctor called";
		this->commission=0;
	}

	HR(int i,char* n,float s,int t,int in,float c) : sales_manager(i,n,s,t,in)
	{
		cout<<"\nHR parameterized constrctor called";
		this->commission=c;
	}

	void display()
	{
		sales_manager::display();
		cout<<"\n the HR commission is :"<<commission;
	}
};//HR class ends here

void main()
{
	HR h1;
	h1.display();

	cout<<"\n\n";

	HR h2;
	h2.setEmp_name("MS Dhoni");
	h2.setTarget(45);
	h2.setEmp_id(7);
	h2.setEmp_salary(70000);
	h2.setCommssion(5000);
	h2.setIncentive(4000);
	h2.display();

	cout<<"\n\n";
}

