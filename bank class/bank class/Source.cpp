/*#include<iostream>
#include<string.h>

using namespace std;
class Bankaccount
{
	int acc_no;
	char name[20];
	double bal;
	static double interestRate;

public:

	Bankaccount()//default
	{
		acc_no = 101;
		strcpy(name, "not given");
		bal = 100;
		
	}
	Bankaccount(int a, char* nm, double b)//parameterised
	{
		acc_no = a;
		strcpy(name, nm);
		bal = b;
		

	}


	void setname(char* nm)
	{
		strcpy(name, nm);
	}
	static void setInterestRate(double i)
	{
		interestRate = i;
		cout << "\n balcnce in account is : " << bal;
		cout << "\n interestRate is :" << interestRate;
	}
	void display()
	{
		cout << "\n account number is: " << acc_no;
		cout << "\n account holder name is : " << name;
		cout << "\n balcnce in account is : " << bal;
		cout << "\n interestRate is :" << interestRate;
	}
};//class ends here
double Bankaccount:: interestRate = 5.6;
void main()
{
	Bankaccount b1(1314, "Shweta", 5000);
	b1.display();
	cout << "\n";
	Bankaccount b2(17,"Yogesh",7000);
	b2.display();
	cout << "\n";
	Bankaccount b3(007, "Vinayak", 1);
	b3.display();
	cout << "\n\n";

	Bankaccount::setInterestRate(10.8);

	b1.display();
	b2.display();
	b3.display();

}*/


#include<iostream>
using namespace std;
class bank_account
{
	int ac_id;
	char name[20];
	float amount;
	static float intrest_rate;

public:
	bank_account()
	{
		this->ac_id=0;
		this->amount=0;
		//this->intrest_rate=0;
		strcpy(name,"not given");
	}

	bank_account(int i,char* n,float a,float r)
	{
		this->ac_id=i;
		strcpy(this->name,n);
		this->amount=a;
		//this->intrest_rate=r;
	}

	void setAc_id(int id)
	{
		this->ac_id=id;
	}

	void setName(char* n)
	{
		strcpy(this->name,n);
	}

	void setAmount(float a)
	{
		this->amount=a;
	}

	/*	void setIntrest_rate(float i)
	{
		intrest_rate=i;
	}*/

	static void setInterestRate(float i)
	{
		intrest_rate = i;
		cout << "\n interestRate is :" << intrest_rate;
	}

	int getid()
	{
		return ac_id;
	}

	char* getName()
	{
		return name;
	}

	float getAmount()
	{
		return amount;
	}

	float getIntrest()
	{
		return intrest_rate;
	}

	void display()
	{
		cout<<"\nThe id is :"<<getid();
		cout<<"\nThe name is :"<<getName();
		cout<<"\nThe amount is :"<<getAmount();
		cout<<"\nThe intrest rate is :"<<getIntrest();
	}
};

float bank_account:: intrest_rate=5.6;
void main()
{
	
	bank_account b1;
	b1.setAc_id(10);
	b1.setAmount(50000);
	//b1.setIntrest(29);
	b1.setName("sachin");
	bank_account::setInterestRate(10.8);
	b1.display();
	

	cout<<"\n\n";
	
	bank_account b2;
	b2.setAc_id(110);
	b2.setName("ramesh");
	b2.setAmount(10000);
	
	cout<<"\n\n";
	
	bank_account b3;
	b3.setAc_id(110);
	b3.setName("sachin");
	b3.setAmount(10000);

	b2.display();
	b3.display();
}