#include<iostream>
using namespace std;
class node
{
	int data;
	node* next;
public:
	node(int d)
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

	void setNext(node* n)
	{
		this->next=n;
	}
	node* getNext()
	{
		return this->next;
	}
};

class linklist
{
	node* start;
public:
	void display(int data)
	{
		if(start==NULL)
		{
			cout<<"empty";
		}
		else
		{
			node* ep = start;
			while(ep->getNext() != NULL)
			{
				cout<<"Data is : "<<ep->getData();
				cout<<"\nAdresss is :"<<ep->getNext()<<"\n\n";
				ep=ep->getNext;
			}
				cout<<"Data is : "<<ep->getData();
				cout<<"\nAdresss is :"<<ep->getNext()<<"\n\n";	
		}
	}

	void addAtEnd(int data)
	{
		node* new_node = new node(data);
		if(this->start==NULL)
		{
			start = new_node;
		}
		else
		{
			node* ep=start;
			while(ep->getNext()!=NULL)
			{
				ep=ep->getNext();
			}
			ep->setNext(new_node);
		}
	}

	int deleteAtEnd()
	{
		int data=0;
		node* ep = start;
		if(this->start==NULL)
		{
			cout<<"empty";
		}
		else
		{
			while (ep->getNext()->getNext() != NULL)
			{
				ep=ep->getNext();
			}
			node* temp = ep->getNext();
			data = temp->getData();
			ep->setNext(NULL);
			delete temp;
			return data;
		}
	}

	void deleteForBeg()
	{
		if(start==NULL)
		{
			cout<<"\n empty";
		}
		else
		{
			node* temp = start;
			start=start->getNext();
			delete temp;
		}
	}


};