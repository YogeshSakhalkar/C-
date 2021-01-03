#include<iostream>
using namespace std;
class picture
{
	char name[20];
	float price;
public:
	void setName(char* n)
	{
		strcpy(name,n);
	}

	void setPrice(float p)
	{
		this->price=p;
	}

	char* getName()
	{
		return name;
	}

	float getPrice()
	{
		return price;
	}

	void display()
	{
		cout<<"\nthe name of picture is :"<<name;
		cout<<"\nthe price is :"<<price;
	}

	picture()
	{
		cout<<"\npicture default constructor called";
		strcpy(this->name,"not given");
		this->price=0;
	}

	picture(char* n,float p)
	{
		strcpy(this->name,n);
		this->price=p;
	}
};

class photograph : public picture
{
	char photographer[20];
	char camera[20];
public:
	void setPhotographer(char* p)
	{
		strcpy(photographer,p);
	}

	void setCamera(char* c)
	{
		strcpy(camera,c);
	}

	char* getPhotographer()
	{
		return photographer;
	}

	char* getCamara()
	{
		return camera;
	}

	void display()
	{
		picture::display();
		cout<<"\n the photographar name is :"<<photographer;
		cout<<"\n the camera name is : "<<camera;
	}

	photograph():picture()
	{
		cout<<"\n photograph default constructor called";
		strcpy(photographer,"not given");
		strcpy(camera,"not given");
	}

	photograph(char* n,float p,char* ph,char* c):picture(n,p)
	{
		cout<<"\n phtograph parameterized constrctor called";
		strcpy(photographer,ph);
		strcpy(camera,c);
	}
};
class painting : public picture
{
	char Artist_name[20];
	char Owner_name[20];
public:
	void setArtist_name(char* a)
	{
		strcpy(Artist_name,a);
	}
	void setOwner_name(char* o)
	{
		strcpy(Owner_name,o);
	}

	char* getArtist_name()
	{
		return Artist_name;
	}

	char* getOwner_name()
	{
		return Owner_name;
	}

	void display()
	{
picture::display();
		cout<<"\n Artist name is :"<<Artist_name;
		cout<<"\n owner name is :"<<Owner_name;
	}

	painting():picture()
	{
		cout<<"\n paiting default constructor called";
		strcpy(Artist_name,"not given");
		strcpy(Owner_name,"not given");
	}

	painting(char* n,float p,char* ph,char* c):picture(n,p)
	{
		cout<<"\n paiting parameterized constrctor called";
		strcpy(Artist_name,ph);
		strcpy(Owner_name,c);
	}
};

void main()
{
	photograph ph1;
	ph1.display();

	cout<<"\n\n";

	painting pa1;
	pa1.display();

	cout<<"\n\n";

	photograph ph2;
	ph2.setPrice(500000);
	ph2.setCamera("sony alpha mark 2");
	ph2.setName("sunset");
	ph2.setPhotographer("eric");
	ph2.display();

	cout<<"\n\n";

	painting pa2;
	pa2.setArtist_name("picasso");
	pa2.setName("sketch");
	pa2.setOwner_name("yogesh");
	pa2.setPrice(100000000);
	pa2.display();

	cout<<"\n\n";
}