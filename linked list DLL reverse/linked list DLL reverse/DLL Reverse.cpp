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

	void setAtEnd(int d)
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

	void AddAtBeg(int data)
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

	void RemfromBeg()
	{
		if (start == NULL)
		{
			cout << "\nLinked list is Empty:";
		}

		else
		{
			Node* temp = start;
			start = start->getNext();
			delete temp;
		}
	}

	int RemfromEnd()
	{
		int data = 0;
		Node* ep = start;
		while (ep->getNext()->getNext() != NULL)
		{
			ep = ep->getNext();
		}
		Node* temp = ep->getNext();
		data = temp->getData();
		ep->setNext(NULL);
		delete temp;
		return data;
	}

	void display()
	{
		if (this->start == NULL)
		{
			cout << "\nLinkedList is Empty";
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
			cout << " " << ep->getData();
		}
	}

	void Reverse()
	{
		if (this->start == NULL)
		{
			cout << "\nLinkedList is Empty";
			return;
		}

		else
		{
			Node* ep = start;
			while (ep->getNext() != NULL)
			{
				ep = ep->getNext();
			}
			
			while (ep->getPrev() != NULL)
			{
				cout << " " << ep->getData();
				ep = ep->getPrev();
			}
			cout << " " << ep->getData();
		}
	}
};//linkedlist class end here

void main()
{
	Linkedlist L1;
	L1.setAtEnd(10);
	L1.setAtEnd(20);
	L1.setAtEnd(30);
	L1.setAtEnd(40);
	L1.display();
	cout<<"\n\n\n";

	L1.AddAtBeg(5);
	L1.display();
	cout<<"\n";
	
	L1.Reverse();
	cout << "\n\n";
}