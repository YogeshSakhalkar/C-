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
	virtual	void display()
	{
		cout << "\nVehical Name is : " << this->vehical_name;
		cout << "\nNo. of Wheels are : " << this->wheels_size;
		cout << "\nColor is : " << this->color;
		cout << "\nFuel Type is : " << this->fuel;
		cout << "\nNo. of Seats are : " << this->seats;
	}
};

class car : public vehicle
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

void vechicalDeatils(vehicle*);
void main()
{
	


	vechicalDeatils(new car("kia seltos",17, "black", "diesel-auto", 4,4));

	cout << "\n\n";

	vechicalDeatils(new van("eco",24, "white", "diesel", 4, 4,50));

	cout << "\n\n";
}

void vechicalDeatils(vehicle* v)
{
	cout<<"\n\n";
	cout<<"\n vehical name is :"<<v->getVehical_name();
	cout << "\nNo. of Wheels are : " << v->getWheels();
	cout << "\nColor is : " << v->getColor();
	cout << "\nFuel Type is : " << v->getFuel();
	cout << "\nNo. of Seats are : " << v->getSeats();

	car * c = dynamic_cast<car*>(v);
	if(c != NULL)
	{
		cout << "\nNo Of Doors Are:" << c->getNo_of_doors();
	}

	van* vn = dynamic_cast <van*>(v);
	{
		if(vn != NULL)
		{
			cout << "\nNo Of Doors Are:" << vn->getNo_of_doors();
			cout << "\nLoad Capacity in KG is:" << vn->getLoad_capacity();
		}
	}
}

void vechicalDeatils1(vehicle* v)
{
	cout<<"\n\n";
	cout<<"\n vehical name is :"<<v->getVehical_name();
	cout << "\nNo. of Wheels are : " << v->getWheels();
	cout << "\nColor is : " << v->getColor();
	cout << "\nFuel Type is : " << v->getFuel();
	cout << "\nNo. of Seats are : " << v->getSeats();

	if(strcmp(typeid(*v).name(),"class car")==0)
	{
	car* c =  (car*) v;
	cout << "\nNo Of Doors Are:" << c->getNo_of_doors();
	}

	if(strcmp(typeid(*v).name(), "class van")==0)
	{
		van *vn = (van*)v;
		cout << "\nNo Of Doors Are:" << vn->getNo_of_doors();
		cout << "\nLoad Capacity in KG is:" << vn->getLoad_capacity();
	}
}