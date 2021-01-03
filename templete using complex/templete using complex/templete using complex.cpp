#include<iostream>
using namespace std;

template <class T>
class Node
{
	T data;
	Node<T>* next;
public:
	Node(T d)
	{
		this->data = d;
		this->next = NULL;
	}
	void setData(T d)
	{
		this->data = d;
	}
	T getData()
	{
		return this->data;
	}
	void setNext(Node<T>* n)
	{
		this->next = n;
	}
	Node<T>* getNext()
	{
		return this->next;
	}
};//Node class end here

template<class S>
class Linkedlist
{
	Node<S>* start;
public:
	Linkedlist()
	{
		this->start = NULL;
	}

	void setAtEnd(S data)
	{
		Node<S>* new_node = new Node<S>(data);
		if (this->start == NULL)
		{
			this->start = new_node;
			return;
		}

		else
		{
			Node<S>* ep = start;
			while (ep->getNext() != NULL)
			{
				ep = ep->getNext();
			}
			ep->setNext(new_node);
		}
	}

	void addAtBeg(S data)
	{
		Node<S>* new_node = new Node<S>(data);
		if (start == NULL)
		{
			start = new_node;
		}
		else
		{
			new_node->setNext(start);
			start = new_node;
		}
	}

	void remfromBeg()
	{
		if (start == NULL)
		{
			cout << "\nLinked list is Empty:";
		}

		else
		{
			Node<S>* temp = start;
			start = start->getNext();
			delete temp;
		}
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
			Node<S>* ep = start;
			while (ep->getNext() != NULL)
			{
				cout << " " << ep->getData();
				ep = ep->getNext();
			}
			cout << " " << ep->getData();
		}
	}
};

void main()
{
	Linkedlist<int> l1;
	l1.setAtEnd(10);
	l1.setAtEnd(20);
	l1.setAtEnd(30);
	l1.setAtEnd(40);

	l1.addAtBeg(5);
	l1.display();
	cout<<"\n\n\n";

	l1.remfromBeg();
	l1.display();
	cout<<"\n\n\n";
	
	l1.remfromBeg();
	l1.display();
	cout<<"\n\n\n";

	Linkedlist <char> l2;
	l2.setAtEnd('A');
	l2.setAtEnd('B');
	l2.setAtEnd('C');
	l2.setAtEnd('D');
	l2.display();
	cout<<"\n\n\n";

	l2.addAtBeg('Z');
	l2.display();
	cout<<"\n\n\n";

	l2.remfromBeg();
	l2.display();
	cout<<"\n\n\n";
}