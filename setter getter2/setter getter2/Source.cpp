#include<stdio.h>
#include<string.h>
struct time
{
	int hrs;
	int mins;
	int sec;

	void setHrs(int input)
	{
		 this->hrs=input;
	}

	void setMins(int input)
	{
		this->mins=input;
	}
	
	void setSec(int input)
	{
		this->sec=input;
	}

	int getHrs()
	{
		return this->hrs;
	}

	int getMins()
	{
		return this->mins;
	}

	int getSec()
	{
		return this->sec;
	}
};

void main()
{
	time t1;
	t1.setHrs(10);
	t1.setMins(10);
	t1.setSec(20);
	printf("\n the time is %d : %d : %d\n\n",t1.getHrs(),t1.getMins(),t1.getSec());
}
