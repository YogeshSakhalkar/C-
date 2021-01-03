#include<stdio.h>
#include<string.h>
struct hotel_managment
{
	char cust_name[20];
	int cust_id;
	int age;
	int no_of_days;

	void setCust_name(char* input)
	{
		strcpy(this->cust_name,input);
	}

	void setCust_id(int input)
	{
		this->cust_id=input;
	}

	void setAge(int input)
	{
		this->age=input;
	}

	void setNo_of_days(int input)
	{
		this->no_of_days=input;
	}
	
	char* getCust_name()
	{
		return this->cust_name;
	}
	
	int getCust_id()
	{
		return this->cust_id;
	}
	
	int getCust_age()
	{
		return this->age;
	}

	int getCust_days()
	{
		return this->no_of_days;
	}
};

void main()
{
	hotel_managment h1;
	h1.setCust_name("sachin");
	h1.setCust_id(10);
	h1.setAge(27);
	h1.setNo_of_days(7);

	printf("\n\nThe name of the customer is %s",h1.getCust_name());
	printf("\n\nThe customer id is %d",h1.getCust_id());
	printf("\n\nThe customer age is %d",h1.getCust_age());
	printf("\n\nThe no of days the customer is going to stay are %d",h1.getCust_days());
	printf("\n\n");
}