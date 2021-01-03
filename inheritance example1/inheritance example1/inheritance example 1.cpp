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

	void display()
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
	char url[20];
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

void main()
{
	offline o1;
	o1.display();

	cout<<"\n\n";

	online on2;
	on2.display();

	cout<<"\n\n";
	
	online on1;
	on1.setCourse_name("netflix");
	on1.setDuration("2 hrs");
	on1.setTrainer_name("vinaiyak");
	on1.setFees(10000);
	on1.setUrl("www.firstbitsolution.com");
	on1.display();

	cout<<"\n\n";

	offline o2;
	o2.setAdress("pune");
	o2.setCourse_name("first bit");
	o2.setDuration("2 hr");
	o2.setTrainer_name("vinaiyak");
	o2.setFees(15000);
	o2.display();

	cout<<"\n\n\n";
}