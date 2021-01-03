#include<iostream>
using namespace std;
#include<string.h>
class employee
{
	int id;
	char name[20];
	float salary;

public:
	employee();
	employee(int ,char* ,float );
	employee(employee&);
	

	void setId(int);
	void setName(char*);
	void setSalary(float);
	int getId();
	char* getName();
	float getSalary();

};
	
	void employee :: setId(int input)
	{
		 this->id=input;
	}

	void employee :: setName(char* input)
	{
		strcpy_s(this->name,input);
	}

	void employee :: setSalary(float input)
	{
		this->salary=input;
	}

	int employee :: getId()
	{
		return this->id;
	}

	char* employee :: getName()
	{
		return this->name;
	}

	float employee :: getSalary()
	{
		return this->salary;
	}
	
	employee :: employee()
	{
		cout<<"\n Default constructor";
	}
	
	employee :: employee(int i,char* n,float s)
	{
		cout<<"\n parameterized constructor";
		this->id=i;
		this->salary=s;
		strcpy(this->name,n);
	}
	
	employee ::employee(employee& o)
	{
		cout<<"\n copy constuctor";
		this->id=o.id;
		this->salary=o.salary;
		strcpy(this->name,o.name);
	}
	
	ostream& operator<<(ostream& o,employee& e)
	{
		o<<"\nthe id is :"<<e.getId();
		o<<"\nthe name is :"<<e.getName();
		o<<"\nthe salary is :"<<e.getSalary();
		return o;
	}
	//employee class end here 

class Node
{
	employee data;
	Node* next;
public:
	Node()
	{
	}
	Node(employee d)
	{
		this->data=d;
		this->next=NULL;
	}


	void setData(employee d)
	{
		this->data=d;
	}

	employee getData()
	{
		return this->data;
	}

	void setNext(Node* n)
	{
		this->next=n;
	}

	Node* getNext()
	{
		return this->next;
	}
};//Node class end here

class linklist
{
	Node* start;
public:

	linklist()
	{
		this->start=NULL;
	}
	
	void addAtTheEnd(employee data)
	{
		Node * nn = new Node(data);
		if(this->start==NULL)
		{
			this->start = nn;
			return;
		}
		else
		{
			Node* ep = start;
			while(ep->getNext() != NULL)
			{
				ep = ep->getNext();
			}
			ep->setNext(nn);
		}
	}

	void addAtTheBeg(employee data)
	{
		Node* new_node = new Node(data);
		if(start == NULL)
		{
			start = new_node;
		}
		else
		{
			new_node ->setNext(start);
			start = new_node;
		}
	}

	void deleteFromBeg()
	{
		try
		{
			if(start == NULL)
			{
				throw 1;
			}
			else
			{
				Node* temp = start;
				start = start -> getNext();
				delete temp;
			}
		}
		catch (int error)
		{
			cout<<"\n empty";
		}
	}

	void display()
	{
		if(this->start==NULL)
		{
			cout<<"\nlinked list is empty\n";
			return;
		}
		else
		{
			Node* ep=start;
			while(ep->getNext()!=NULL)
				{
					cout<< ep->getData();
					cout<<"\n";
					ep=ep->getNext();
					cout<<"\t"<<ep<<"\n";
				}
				cout<<ep->getData();
				cout<<"\n\t"<<ep->getNext()<<"\n";
		}
	}

	void serchById(int id)
	{
		try
		{
			Node* ep= start;
			while(ep->getNext() != NULL)
			{
				employee e = ep->getData();
				if(e.getId()==id)
				{
					throw 1;
				}
				ep =  ep->getNext();
			}
			employee e = ep->getData();
			if(e.getId() == id)
			{
				throw 1;
			}
			throw 0;
		}
		
		catch(int ans)
		{
			if(ans==1)
			{
				cout<<"\n\nID is found\n\n";
			}
			else
			{
				cout<<"\n\nID is NOT found\n\n";
			}
		}
	}
	
	void serchByName(char* name)
	{
		try
		{
			Node* ep= start;
			while(ep->getNext() != NULL)
			{
				employee e = ep->getData();
				if(strcmp(e.getName(),name)==0)
				{
					throw 1;
				}
				ep =  ep->getNext();
			}
			employee e = ep->getData();
			if(strcmp(e.getName(),name)==0)
			{
				throw 1;
			}
			throw 0;
		}
		
		catch(int ans)
		{
			if(ans==1)
			{
				cout<<"\n\nName is found\n\n";
			}
			else
			{
				cout<<"\n\nName is NOT found\n\n";
			}
		}
	}
};//LinkedList end here

ostream& operator<<(ostream& ,employee& );
 void main()
 {
	 employee e1(101,"sachin",500000);
	 employee e2(102,"yogesh",600000);
	 employee e3(103,"nihaab",700000);
	 linklist l1;
	 l1.addAtTheEnd(e1);
	 l1.addAtTheEnd(e2);
	 l1.addAtTheEnd(e3);
	 l1.display();
	 l1.serchById(105);
	 l1.serchByName("sachn");
	cout<<"\n\n\n";
 }

