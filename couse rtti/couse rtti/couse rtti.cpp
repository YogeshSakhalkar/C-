#include<iostream>
using namespace std;
class course
{
	char course_name[20];
	char duration[20];
	char trainer_name[20];
	float fees;

public:

	void setCourse_name(char* Cn)
	{
		strcpy(this->course_name,Cn);
	}

	void setDuration(char* d)
	{
		strcpy(duration,d);
	}

	void setTrainer_name(char* Tn)
	{
		strcpy(this->trainer_name,Tn);
	}

	void setFees(float fees)
	{
		this->fees=fees;
	}

	char* getCourse_name()
	{
		return course_name;
	}

	char * getTrainer_name()
	{
		return trainer_name;
	}
	char* getDuration()
	{
		return duration;
	}

	float getFees()
	{
		return fees;
	}

	course()
	{
		cout<<"\n course default constructor called";
		strcpy(this->course_name," no given");
		strcpy(this->duration," not given");
		strcpy(this->trainer_name,"not given");
		this->fees=0;
	}

	course(char* Cn,char* d,char* Tn,float f)
	{
		cout<<"\n course parameterized constructor called";
		strcpy(this->course_name,Cn);
		strcpy(this->duration,d);
		strcpy(this->trainer_name,Tn);
		this->fees=f;
	}

	virtual	void display()
	{
		cout<<"\n the course name is :"<<course_name;
		cout<<"\n the duration of course is :"<<duration;
		cout<<"\n the trainer name is  :"<<trainer_name;
		cout<<"\n the fees are :"<<fees;
	}
};

class offline : public course
{
	char address [30];
public:
	void setAdress(char* a)
	{
		strcpy(address,a);
	}

	char* getAddress()
	{
		return address;
	}

	offline () : course()
	{
		cout<<"\n offline default constructor called";
		strcpy(this->address,"address is not given");
	}

	offline(char* Cn,char* d,char* Tn,float f,char* a) : course(Cn,d,Tn,f)
	{
		cout<<"\n offline parameterized constructor called";
		strcpy(this->address,a);
	}

	void display()
	{
		course::display();
		cout<<"\n the address is "<<address;
	}
};

class online : public course
{
	char url[30];
public:
	void setUrl(char* a)
	{
		strcpy(url,a);
	}

	char* getUrl()
	{
		return url;
	}

	online () : course()
	{
		cout<<"\n online default constructor called";
		strcpy(this->url,"url is not given");
	}

	online (char* Cn,char* d,char* Tn,float f,char* a) : course(Cn,d,Tn,f)
	{
		cout<<"\n online parameterized constructor called";
		strcpy(this->url,a);
	}

	void display()
	{
		course::display();
		cout<<"\n the url  is "<<url;
	}
};


void allCourseDetails(course*);
void main()
{
	cout<<"\n\n\n";

	allCourseDetails(new online("netflix","2 hrs","vinaiyak",10000,"www.firstbitsolution.com"));

	cout<<"\n\n\n";

	allCourseDetails(new offline("first bit","2 hr","vinaiyak",15000,"Pune - Maharastra"));


	cout<<"\n\n\n";
}

void allCourseDetails(course *c)
{
	cout<<"\n\n";
	cout<<"\n the course name is :"<<c->getCourse_name();
	cout<<"\n the duration of course is :"<<c->getDuration();
	cout<<"\n the trainer name is  :"<<c->getTrainer_name();
	cout<<"\n the fees are :"<<c->getFees();
	
	online* on = dynamic_cast <online*> (c);
	if(on != NULL)
	{
		cout<<"\n the url  is "<<on->getUrl();
	}

	offline* off =dynamic_cast <offline*> (c);
	if(off != NULL)
	{
		cout<<"\n the address is "<<off->getAddress();
	}
}

void allCourseDetails1(course *c)
{
	cout<<"\n\n";
	cout<<"\n the course name is :"<<c->getCourse_name();
	cout<<"\n the duration of course is :"<<c->getDuration();
	cout<<"\n the trainer name is  :"<<c->getTrainer_name();
	cout<<"\n the fees are :"<<c->getFees();

	if(strcmp(typeid(*c).name(), "class offline")==0)//rtti
	{
		offline* o = (offline *)c;
		cout<<"\n the address is "<<o->getAddress();
	}

	if(strcmp(typeid(*c).name(), "class online")==0)
	{
		online * ol = (online*)c;
		cout<<"\n the url  is "<<ol->getUrl();
	}
}