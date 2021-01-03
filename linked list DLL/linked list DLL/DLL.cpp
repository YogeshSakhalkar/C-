#include<iostream>
using namespace std;
class Node
{
	Node*prev;
	int data;
	Node* next;
public:
	Node(int d)
	{
		this->prev = NULL;
		this->data = d;
		this->next = NULL;
	}
	void setPrev(Node* p)
	{
		this->prev = p;
	}
	Node* getPrev()
	{
		return this->prev;
	}
	void setData(int d)
	{
		this->data = d;
	}
	int getData()
	{
		return this->data;
	}
	void setNext(Node* n)
	{
		this->next = n;
	}
	Node* getNext()
	{
		return this->next;
	}
};//Node class end here

class Linkedlist
{
	Node* start;
public:
	Linkedlist()
	{
		this->start = NULL;
	}

	void addAtEnd(int d)
	{
		Node* nn = new Node(d);
		if (this->start == NULL)
		{
			this->start = nn;
			return;
		}

		else
		{
			Node* ep = start;
			while (ep->getNext() != NULL)
			{
				ep->getNext()->setPrev(ep);
				ep = ep->getNext();
			}
			ep->setNext(nn);
			ep->getNext()->setPrev(ep);
		}
	}

	void addAtBeg(int data)
	{
		Node* nn = new Node(data);
		if (start == NULL)
		{
			start = nn;
		}
		else
		{
			nn->setNext(start);
			start = nn;
			nn->getNext()->setPrev(nn);
		}
	}

	void remfromBeg()
	{
		if (start == NULL)
		{
			cout<<"\n Empty:";
		}

		else
		{
			Node* temp = start;
			start = start->getNext();
			delete temp;
		}
	}

	int remfromEnd()
	{
		int data = 0;
		Node* ep = start;
		while (ep->getNext()->getNext()!=NULL)
		{
			ep = ep->getNext();
		}
		Node* temp = ep->getNext();
		data = temp->getData();
		ep->setNext(NULL);
			delete temp;
			return data;
	}

	void addAtPosition(int data, int pos)
	{
		Node* nn = new Node(data);
		if (pos == 0)
		{
			addAtEnd(data);
		}
		else
		{
			Node* ep = this->start;
			for (int i = 1; i < pos; i++)
			{
				ep = ep->getNext();
			}
			if (ep->getNext() == NULL)
			{
				addAtEnd(data);
			}
			else
			{
				Node* temp = ep->getNext();
				nn->setNext(temp);
				ep->setNext(nn);
				nn->setPrev(ep);
				temp->setPrev(nn);
				
			}
		}
	}

	void display()
	{
		if (this->start == NULL)
		{
			cout<<"\n Empty";
			return;
		}
		else
		{
			Node* ep = start;
			while (ep->getNext() != NULL)
			{
				cout << " " << ep->getData();
				ep = ep->getNext();
			}
			cout<<" "<<ep->getData();
		}
	}
};//Linked List ends here

void main()
{
	Linkedlist d1;
	d1.addAtEnd(10);
	d1.addAtEnd(20);
	d1.addAtEnd(30);
	d1.addAtEnd(40);
	d1.addAtBeg(5);
	d1.display();
	cout<<"\n\n\n";

	d1.remfromBeg();
	d1.display();
	cout<<"\n\n\n";

	d1.remfromEnd();
	d1.display();
	cout<<"\n\n\n";

	d1.addAtPosition(100,1);
	d1.display();
	cout<<"\n\n\n";
	
}