#include<iostream>
using namespace std;

class booking
{
	char name[20];
	int phone;
	char email[30];
	float amount;

public:

	void setName(char* n)
	{
		strcpy(this->name, n);
	}
	void setPhone(int p)
	{
		this->phone = p;
	}
	void setEmail(char* e)
	{
		strcpy(this->email, e);
	}
	void setAmount(float a)
	{
		this->amount = a;
	}

	char* getName()
	{
		return this->name;
	}
	int getPhone()
	{
		return this->phone;
	}
	char* getEmail()
	{
		return this->email;
	}
	float getAmount()
	{
		return this->amount;
	}
		booking()
	{
		cout<<"\nBooking Default constructor called";
		strcpy(this->name, "name not given ");
		this->phone = 0;
		strcpy(this->email, "email not given");
		this->amount = 0;
	}
	booking(char* n,int p,char* e,float a)
	{
		cout<<"\nBooking Parametrized constructor called";
		strcpy(this->name, n);
		this->phone = p;
		strcpy(this->email,e);
		this->amount = a;
	}
	void display()
	{
		cout<<"\nuser name is:"<<name;
		cout<<"\nuser phone number is:"<<phone;
		cout<<"\nuser email is:"<<email;
		cout<<"\namount is:" <<amount;
	}
};

class bus_booking :public booking
{
	int no_of_seats;
	char start_place[30];
	char dest[30];

public:

	void setSeats(int s)
	{
		this->no_of_seats = s;
	}
	void setStart_palce(char* sp)
	{
		strcpy(this->start_place, sp);
	}
	void setDest(char* d)
	{
		strcpy(this->dest, d);
	}

	int getSeats()
	{
		return this->no_of_seats;
	}
	char* getStart_palce()
	{
		return this->start_place;
	}
	char* getDest()
	{
		return this->dest;
	}
	
	bus_booking() :booking()
	{
		cout<<"\nBus booking default constructor called";
		this->no_of_seats = 0;
		strcpy(this->start_place, "not given");
		strcpy(this->dest, "not given");
	}
	
	bus_booking(char* n, int p, char* e, float a,int s, char* sp, char* d) :booking(n,p,e,a)
	{
		cout<<"\nBus booking Parameterized constructor called";
		this->no_of_seats = s;
		strcpy(this->start_place, sp);
		strcpy(this->dest, d);
	}
	void display()
	{
		booking::display();
		cout<<"\ntotal number of seats are : "<<no_of_seats;
		cout<<"\nStarting place is : "<<start_place;
		cout<<"\nDestination is : "<<dest;
	}
};

class hotel_booking :public booking
{
	char hotel_name[20];
	int no_of_rooms;
	int check_in;
	int check_out;
public:
	void setHotel_Name(char* h)
	{
		strcpy(this->hotel_name, h);
	}

	void setRooms(int r)
	{
		this->no_of_rooms = r;
	}
	void setCheck_in(int in)
	{
		this->check_in = in;
	}
	void setCheck_out(int out)
	{
		this->check_out = out;
	}

	char* getHotel_Name()
	{
		return this->hotel_name;
	}

	int getRooms()
	{
		return this->no_of_rooms;
	}
	int getCheck_in()
	{
		return this->check_in;
	}
	int getCheck_out()
	{
		return this->check_out;
	}
	
		hotel_booking() :booking()
	{
		cout << "\nHotel booking default constructor called";
		strcpy(this->hotel_name, "not given");
		this->no_of_rooms = 0;
		this->check_in = 0;
		this->check_out = 0;
		
	}
	hotel_booking(char* n, int p, char* e, float a,char* h, int r,int in,int out) :booking(n, p, e, a)
	{
		cout << "\nHotel booking parameterized constructor called";
		strcpy(this->hotel_name, h);
		this->no_of_rooms = r;
		this->check_in = in;
		this->check_out = out;
	}
	void display()
	{
		booking::display();
		cout<<"\nHotel name is:" << this->hotel_name;
		cout<<"\ntotal number of rooms are:" << this->no_of_rooms;
		cout<<"\nCheck-In Date is:" << this->check_in;
		cout<<"\nCheck-Out Date is:" << this->check_out;
	}
};

void main()
{
	bus_booking bb1;
	bb1.display();
	cout << "\n\n";
	
	hotel_booking hb1;
	hb1.display();
	cout << "\n\n";

	bus_booking bb2("anish",9896412111, "anish896@gmail.com", 10000, 46, "margoa", "hampi");
	bb2.display();
	cout << "\n\n";

	hotel_booking hb2("ms dhoni", 9087698751, "msdhoni@gmail.com", 14000, "nanu resort", 3,13, 17);
	hb2.display();
	cout << "\n\n";
}