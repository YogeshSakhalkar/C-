#include<stdio.h>
#include<string.h>

struct pateint
{
	char name[20];
	int paitent_no;
	int bed_no;

	void setName(char* input)
	{
		strcpy(this->name,input);
	}

	void setPaitent_no(int input)
	{
		this->paitent_no=input;
	}
	void setBed_no(int input)
	{
		this->bed_no=input;
	}
	int getPaitent_no()
	{
		return this->paitent_no;
	}
	int getBed_no()
	{
		return this->bed_no;
	}
	char* getName()
	{
		return this->name;
	}
};

void main()
{
	pateint p1;
	p1.setPaitent_no(101);
	p1.setBed_no(23);
	p1.setName("Yogesh");
	printf("\n\nThe name is %s",p1.getName());
	printf("\n\nThe bed number  is %d",p1.getBed_no());
	printf("\n\nThe paitent is %d",p1.getPaitent_no());

	pateint p2;
	p2.setBed_no(101);
	p2.setName("YOg");
	p2.setPaitent_no(22);
	printf("\n\n The name is %s",p2.getName());
	printf("\n\n The bed number is %d",p2.getBed_no());
	printf("\n\n The paitent number is %d",p2.getPaitent_no());

}