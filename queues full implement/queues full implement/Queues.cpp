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
class Queues 
{
	Node* start;
public:
	Queues()
	{
		this->start=NULL;
	}
	
	void addAtTheEnd(int data)
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
			cout<<"\n empty \n";
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
	int peek()
	{
		return start->getData();
	}

};
 void main()
 {
	 Queues q;
	 q.addAtTheEnd(10);
	 q.addAtTheEnd(20);
	 q.addAtTheEnd(30);
	 q.display();
	 cout<<"\n\n\n";
	 q.deleteFromBeg();
	 cout<<"\n\n\n";
	 q.display();
	 cout<<"\n\n"<<q.peek();
	 cout<<"\n\n";
 }