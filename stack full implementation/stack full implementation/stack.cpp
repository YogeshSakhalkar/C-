using namespace std;
#include<iostream>
class Node
{
	int data;
	Node* next;
public:
	Node(int d)
	{
		this->data=d;
		this->next=NULL;
	}


	void setData(int d)
	{
		this->data=d;
	}

	int getData()
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
};
class stack
{
	Node* start;
public:
	stack()
	{
		this->start=NULL;
	}
	
	void addAtTheBeg(int data)
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
			cout<<"\n no data is there to delete \n";
		}
	}

	int pop()
	{
		int data=0;
		try
		{
			if(start == NULL)
			{
				throw 0;
			}
			else
			{
				data = start ->getData();
				Node* temp = start;
				start = start -> getNext();
				delete temp;
				return data;
			}
		}
		catch(int error)
		{
			cout<<"\nstack is empty";
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
};
 void main()
 {
	 stack s;
	 s.addAtTheBeg(10);
	 s.addAtTheBeg(20);
	 s.addAtTheBeg(30);
	 cout<<"\n\n\n";
	 s.display();
	 cout<<"\n\n\n";
	 s.deleteFromBeg();
	 s.display();
	 cout<<"\n\n"<<s.pop()<<"\n\n";
 }

