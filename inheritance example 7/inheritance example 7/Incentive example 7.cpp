#include<iostream>
using namespace std;

class Theather
{
	char Theather_name[25];
	char Theather_location[25];
	char Show_name[25];
	int No_of_seats;

public:

	void setTheather_name(char* Tn)
	{
		strcpy(Theather_name,Tn);
	}

	char* getTheather_name()
	{
		return Theather_name;
	}

	void setTheather_location(char* Tl)
	{
		strcpy(Theather_location,Tl);
	}

	char* getTheather_location()
	{
		return Theather_location;
	}
	
	void setShow_name(char* Sn)
	{
		strcpy(Show_name,Sn);
	}

	char* getShow_name()
	{
		return Show_name;
	}

	void setNo_of_seats(int S)
	{
		No_of_seats=S;
	}

	int getNo_of_seats()
	{
		return No_of_seats;
	}

	Theather()
	{
		cout<<"\n theater default constructor called";
		strcpy(Theather_name,"name is not given");
		strcpy(Theather_location,"location is not given");
		No_of_seats=0;
	}

	Theather(char* n,char* l,int s)
	{
		cout<<"\n theater parametrized constructor called";
		strcpy(Theather_name,n);
		strcpy(Theather_location,l);
		No_of_seats=s;
	}

	void display()
	{
		cout<<"\nTheater name is :"<<Theather_name;
		cout<<"\nTheater location is : "<<Theather_location;
		cout<<"\nNo of seats are : "<<No_of_seats;
	}
};//theater class ends here

class Movie_theater : public Theather
{
	int No_of_projector_screen;
	int No_of_projector_room;

public:

	void setNo_of_projector_screen(int Ps)
	{
		No_of_projector_screen=Ps;
	}

	int getNo_of_projector_screen()
	{
		return No_of_projector_screen;
	}
	
	void setNo_of_projector_room(int Pr)
	{
		No_of_projector_room=Pr;
	}

	int getNo_of_projector_room()
	{
		return No_of_projector_room;
	}
	
	Movie_theater():Theather()
	{
		cout<<"\n Movie theater default constructor called";
		No_of_projector_screen=0;
		No_of_projector_room=0;
	}

	Movie_theater(char* n,char* l,int s,int Ps,int Pr) : Theather(n,l,s)
	{
		cout<<"\n Movie theater parametrized constructor called";
		No_of_projector_screen=Ps;
		No_of_projector_room=Pr;
	}

	void display()
	{
		Theather::display();
		cout<<"\nTotal No of projector room are : "<<No_of_projector_room;
		cout<<"\nTotal No of projector screen are : "<<No_of_projector_screen;
	}
};//movie theater class ends here 

class Drama_Theather : public Theather
{
	int No_of_Theater_stages;
	int No_of_Makeup_Artist;
	int No_of_Constume_designer;

public:

	void setNo_of_Theater_stages(int Stage)
	{
		No_of_Theater_stages=Stage;
	}

	int getNo_of_Theater_stages()
	{
		return No_of_Theater_stages;
	}

	void setNo_of_Makeup_Artist(int Artist)
	{
		No_of_Makeup_Artist=Artist;
	}

	int getNo_of_Makeup_Artist()
	{
		return No_of_Makeup_Artist;
	}
	Drama_Theather():Theather()
	{
		cout<<"\n Drama theater default constructor called";
		No_of_Makeup_Artist=0;
		No_of_Theater_stages=0;
	}

	Drama_Theather(char* n,char* l,int s,int stages,int artist) : Theather(n,l,s)
	{
		cout<<"\n Drama theater parametrized constructor called";
		No_of_Theater_stages=stages;
		No_of_Makeup_Artist=artist;
	}

	void display()
	{
		Theather::display();
		cout<<"\nNo_of_Theater_stages are : "<<No_of_Theater_stages;
		cout<<"\nNo_of_Makeup_Artist are : "<<No_of_Makeup_Artist;
	}
};//Drama class ends here

void main()
{
	Drama_Theather d1;
	d1.display();

	cout<<"\n\n\n";

	Movie_theater m1;
	m1.display();

	cout<<"\n\n\n";

	Drama_Theather d2;
	d2.setShow_name("stand up comedy");
	d2.setNo_of_Makeup_Artist(5);
	d2.setNo_of_seats(45);
	d2.setTheather_location("Mumbai");
	d2.setNo_of_Theater_stages(3);
	d2.setTheather_name("kala acadamy");
	d2.display();

	cout<<"\n\n\n";

	Movie_theater m2;
	m2.setNo_of_projector_room(2);
	m2.setNo_of_projector_screen(3);
	m2.setNo_of_seats(125);
	m2.setShow_name("Dil Bechara");
	m2.setTheather_location("Margao");
	m2.setTheather_name("Inox");
	
	m2.display();
}
