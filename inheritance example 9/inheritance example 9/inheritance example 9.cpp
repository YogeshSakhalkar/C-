#include<iostream>
using namespace std;

class vehicle
{
	char vehical_name[20];
	int wheels_size;
	char color[20];
	char fuel[20];
	int seats;
public:

	void setVehical_name(char* n)
	{
		strcpy(vehical_name,n);
	}

	void setWheels(int w)
	{
		this->wheels_size = w;
	}

	void setColor(char* c)
	{
		strcpy(this->color, c);
	}

	void setFuel(char* f)
	{
		strcpy(this->fuel, f);
	}
	void setSeats(int s)
	{
		this->seats= s;
	}
	
	char* getVehical_name()
	{
		return vehical_name;
	}


	int getWheels()
	{
		return this->wheels_size;
	}
	char* getColor()
	{
		return this->color;
	}
	char* getFuel()
	{
		return this->fuel;
	}

	int getSeats()
	{
		return this->seats;
	}
	
	vehicle()
	{
		cout<<"\nVehical default constructor called";
		strcpy(vehical_name,"not given");
		this->wheels_size = 0;
		strcpy(this->color, "not given");
		strcpy(this->fuel, "not given");
		this->seats=0;
	}

	vehicle(char* Vn,int w,char* c,char* f,int s)
	{
		cout << "\nVehical parameterized constructor called";
		strcpy(vehical_name,Vn);
		this->wheels_size = w;
		strcpy(this->color, c);
		strcpy(this->fuel, f);
		this->seats=s;
	}
	void display()
	{
		cout << "\nVehical Name is : " << this->vehical_name;
		cout << "\nNo. of Wheels are : " << this->wheels_size;
		cout << "\nColor is : " << this->color;
		cout << "\nFuel Type is : " << this->fuel;
		cout << "\nNo. of Seats are : " << this->seats;
	}
};

class car :public vehicle
{
	int no_of_doors;

public:
	
	void setNo_of_doors(int d)
	{
		this->no_of_doors = d;
	}
	int getNo_of_doors()
	{
		return this->no_of_doors;
	}

	car() :vehicle()
	{
		cout << "\ncar default constructor called";
		this->no_of_doors = 0;
	}

	car(char*n,int w, char* c, char* f, int s, int d) :vehicle(n,w,c,f,s)
	{
		cout << "\nCar parametrized constructor";
		this->no_of_doors= d;
	}

	void display()
	{
		vehicle::display();
		cout << "\nNo Of Doors Are:" << this->no_of_doors;
	}
};

class van :public vehicle
{
	int no_of_doors;
	int load_capacity;

public:

	void setNo_of_doors(int d)
	{
		this->no_of_doors = d;
	}
	int getNo_of_doors()
	{
		return this->no_of_doors;
	}

	void setLoad_capacity(int cap)
	{
		this->load_capacity = cap;
	}
	int getLoad_capacity()
	{
		return this->load_capacity;
	}

	van() :vehicle()
	{
		cout << "\nvan default constructor called";
		this->no_of_doors = 0;
		this->load_capacity = 0;
	}

	van(char* n,int w, char* c, char* f, int s, int d,int cap) :vehicle(n,w, c, f, s)
	{
		cout << "\nVan parametrized constructor called";
		this->no_of_doors = d;
		this->load_capacity = cap;
	}
	void display()
	{
		vehicle::display();
		cout << "\nNo Of Doors Are:" << this->no_of_doors;
		cout << "\nLoad Capacity in KG is:" << this->load_capacity;
	}
};

class bike :public vehicle
{
	char type[20];

public:

	void setType(char* t)
	{
		strcpy(this->type, t);
	}
	char* getType()
	{
		return this->type;
	}

	bike() :vehicle()
	{
		cout << "\nbike default constructor called";
		strcpy(this->type ,"no mentioned");
	}

	bike(char* n,int w, char* c, char* f, int s, char* t) :vehicle(n,w, c, f, s)
	{
		cout << "\nbike parameterized constructor called ";
		strcpy(this->type, t);
		
	}

	void display()
	{
		vehicle::display();
		cout << "\nType:" << this->type;
	}
};


void main()
{
	vehicle v1;
	v1.display();
	cout << "\n\n";

	car c1;
	c1.display();
	cout << "\n\n";

	van vn1;
	vn1.display();
	cout << "\n\n";

	bike b1;
	b1.display();
	cout << "\n\n";

	car c2("kia seltos",17, "black", "diesel-auto", 4,4);
	c2.display();
	cout << "\n\n";

	van vn2("eco",24, "white", "diesel", 4, 4,50);
	vn2.display();
	cout << "\n\n";

	bike b2("himalyan",17, "grey", "petrol",2,"offroading");
	b2.display();
	cout << "\n\n";


}