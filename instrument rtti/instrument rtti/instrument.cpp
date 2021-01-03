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
};//class musical instruments ends here

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
};//lute ends here

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
};//flute ends here


void allInstrument(musical_instrument*);
void main()
{
	allInstrument (new lute("lut",1000,6));
	allInstrument (new flute("flut",400,"high"));
}

void allInstrument(musical_instrument* mi)
{
	cout<<"\n";
	cout<<"\n the name of instrument is : "<<mi->getInstrument_name();
	cout<<"\n the cost is : "<<mi->getCost();

	lute* l = dynamic_cast<lute*>(mi);
	if(l != 0)
	{
		cout<<"\n the no of string is : "<<l->getNo_of_string();
	}

	flute* f =dynamic_cast<flute*>(mi);
	if(f != 0)
	{
		cout<<"\n the level of register :"<<f->getLevel_of_register();
	}
	cout<<"\n\n";
}



void allInstrument1(musical_instrument* mi)
{
	cout<<"\n";
	cout<<"\n the instrument name is : "<<mi->getInstrument_name();
	cout<<"\n the cost of instrument is : "<<mi->getCost();
	
	if(strcmp(typeid(*mi).name(), "class flute")==0)//rtti
	{
		flute * flu =(flute *) mi;
		cout<<"\n name of register is :"<<flu->getLevel_of_register();
	}

	if(strcmp(typeid(*mi).name(), "class lute")==0)
	{
		lute * l = (lute*) mi;
		cout<<"\n no of string are :"<<l->getNo_of_string();
	}
}