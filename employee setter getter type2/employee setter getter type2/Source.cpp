#include<stdio.h>
#include<string.h>
class employee
{
	int id;
	float salary;
	char name[25];
public:
	void setId(int input)
	{
		this->id=input;
	}
	void setSalary(float input)
	{
		this->salary=input;
	}
	void setName(char* input)
	{
		strcpy(this->name,input);
	}
	int getId()
	{
		return this->id;
	}
	float getSalary()
	{
		return this->salary;
	}
	char* getName()
	{
		return this->name;
	}
	void display()
	{
		printf("%d\n\n",this->getId());
		printf("%s\n\n",this->getName());
		printf("%f\n\n",this->getSalary());
	}
};

void main()
{
	employee e1;
	e1.setId(20);
	e1.setName("sachin");
	e1.setSalary(20000);
	e1.display();
}