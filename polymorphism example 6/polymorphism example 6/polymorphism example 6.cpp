#include<iostream>
using namespace std;
class musical_instrument
{
	char instrument_name[20];
	float cost;
public:
	void setInstrument_name(char* i)
	{
		strcpy(instrument_name,i);
	}

	void setCost(float c)
	{
		this->cost=c;
	}

	char* getInstrument_name()
	{
		return instrument_name;
	}

	float getCost()
	{
		return cost;
	}

	virtual void display()
	{
		cout<<"\nInstrument name is :"<<instrument_name;
		cout<<"\nCost is :"<<cost;
	}

	musical_instrument()
	{
		cout<<"musical instrument default constructor called";
		strcpy(instrument_name,"not given");
		this->cost=0;
	}

	musical_instrument(char* i,float c)
	{
		this->cost=c;
		strcpy(instrument_name,i);
	}
};

class lute :public musical_instrument
{
	int no_of_string;
public:
	void setNo_of_string(int s)
	{
		no_of_string=s;
	}

	int getNo_of_string()
	{
		return no_of_string;
	}

	lute() : musical_instrument()
	{
		cout<<"\nLute default constructor called";
		no_of_string=0;
	}

	lute(char*In,float c,int s) : musical_instrument(In,c)
	{
		cout<<"\nLute parameterized constructor called";
		no_of_string=s;
	}

	void display()
	{
		musical_instrument::display();
		cout<<"\n no of string is :"<<no_of_string;
	}
};

class flute :public musical_instrument
{
	char level_of_register[10];
public:
	void setLevel_of_register(char* r)
	{
		strcpy(level_of_register,r);
	}

	char* getLevel_of_register()
	{
		return level_of_register;
	}

	flute() : musical_instrument()
	{
		cout<<"\nflute default constructor called";
		strcpy(level_of_register,"not given");
	}

	flute(char*In,float c,char* r) : musical_instrument(In,c)
	{
		cout<<"\nflute parameterized constructor called";
		strcpy(level_of_register,r);
	}

	void display()
	{
		musical_instrument::display();
		cout<<"\n no of string is :"<<level_of_register;
	}
};

void main()
{
	musical_instrument *mi1;

	cout<<"\n\n";

	lute l2;
	l2.setCost(5000);
	l2.setInstrument_name("lute");
	l2.setNo_of_string(5);
	mi1=&l2;
	mi1->display();

	cout<<"\n\n";

	flute f2;
	f2.setCost(500);
	f2.setLevel_of_register("upper");
	f2.setInstrument_name("flute");
	mi1 = &f2;
	mi1->display();

	cout<<"\n\n";
}