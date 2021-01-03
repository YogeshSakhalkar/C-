#include<stdio.h>
#include<string.h>
struct bike
{
	char bike_name[25];
	int cc;
	int top_speed;
	void setName(char* input)
	{
		strcpy(this->bike_name,input);
	}
	void setCc(int input)
	{
		this->cc=input;
	}
	void setTop_speed(int input)
	{
		this->top_speed=input;
	}
	char* getName()
	{
		return this->bike_name;
	}
	int getCc()
	{
		return this->cc;
	}
	int getTop_speed()
	{
		return this->top_speed;
	}

};
void main()
{
	bike b1;
	b1.setName("himalayan");
	b1.setCc(411);
	b1.setTop_speed(140);

	printf("\n\n The bike name is %s",b1.getName());
	printf("\n\n Bike CC is %d",b1.getCc());
	printf("\n\n Top speed is %d",b1.getTop_speed());
}