#include<iostream>
using namespace std;
class employee
{
	float salary1;
	float salary2;
	float salary3;
public:
	void setSalary1(int salary)
	{
		salary1=salary;
	}
	void setSalary2(float salary2)
	{
		this->salary2=salary2;
	}
	float getSalary1()
	{
		return salary1;
	}
	float getSalary2()
	{
		return this->salary2;
	}

	void display()
	{
		cout<<this->getSalary1()<<"\t"<<this->getSalary2()<<"\n";
	}

	int operator<(employee e2)
	{
		if(this->salary1<e2.salary1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	int operator>(employee e2)
	{
		if(this->salary2>e2.salary2)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	int operator==(employee e1)
	{
		if(this->salary1==e1.salary2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	int operator!=(employee e1)
	{
		if(this->salary1!=e1.salary2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}


};

void main()
{
	employee e1,e2;
	e1.setSalary1(1000);
	e1.setSalary2(700);
	e1.display();
	e2.setSalary1(600);
	e2.setSalary2(1400);
	e2.display();
	employee e3;
	e3.setSalary1(10);
	e3.setSalary2(10);

	int result,result1,result3,result4,result5;
		result1=e1.operator<(e2);
	if(result1==1)
	{
		cout<<e2.getSalary1()<<" is the greatest";
	}
	else
	{
		cout<<e1.getSalary1()<< "is the greatest";
	}

	cout<<"\n\n";
	result=e1.operator>(e2);
	if(result==1)
	{
		cout<<e1.getSalary2()<<"  is the greatest";
	}
	else
	{
		cout<<e2.getSalary2()<<"  is the greatest";
	}
	cout<<"\n\n";

	result3=e3.operator==(e3);
	if(result==1)
	{
		cout<<"Both are not same number \n";

	}
	else
	{
		cout<<"Both number are same\n";
	}
	cout<<"\n\n";

	result4=e3.operator!=(e3);
	if(result4==1)
	{
		cout<<"number are equal";
		
	}else
	{
		cout<<"number are not equal \n";
	}
	cout<<"\n\n";

}

