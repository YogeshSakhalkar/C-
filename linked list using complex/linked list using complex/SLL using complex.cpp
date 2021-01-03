#include<conio.h>
#include<iostream>
using namespace std;

class complex
{
	int real;
	int imag;
public:
	complex()
	{
		this->real = 0;
		this->imag = 0;
	}

	complex(int r, int i)
	{
		this->real = r;
		this->imag = i;
	}
	complex(complex &o)
	{
		this->real=o.real;
		this->imag=o.imag;
	}
	void setReal(int r)
	{
		this->real = r;
	}
	void setImage(int i)
	{
		this->imag = i;
	}
	int getReal()
	{
		return this->real;
	}
	int getImag()
	{
		return this->imag;
	}
	void display()
	{
		cout<<"\n\t"<<this->real<<"  +  " <<this->imag;
	}

	friend void operator>>(istream& i, complex& h);
	friend ostream& operator<<(ostream& o,  complex& h);
	
};//complex class end here

void operator>>(istream& i, complex& h)
{
	int real;
	int imag;
	cout<<"Enter real no =";
	i >> real;
	h.setReal(real);
	cout<<"Enter img no =";
	i >> imag;
	h.setImage(imag);
}
ostream& operator<<(ostream& o,  complex& h)
{
	o << h.getReal() << " + " << h.getImag() << "i" <<"\n\n";
	return o;
}

class Node
{
	complex data;
	Node* next;

public:

	Node(complex d)
	{
		this->data = d;
		this->next = NULL;

	}
	void setNext(Node* n)
	{
		this->next = n;
	}

	void setData(complex d)
	{
		this->data = d;
	}
	Node* getNext()
	{
		return this->next;
	}
	complex getData()
	{
		return this->data;
	}

}; //Node class end here

class LinkList
{
	Node* start;

public:
	LinkList()
	{
		this->start = NULL;	
	}

	void addAtEnd(complex data)
	{
		Node* nm = new Node(data);
		if (this->start == NULL)
		{
			this->start = nm;
			return;
		}
		else
		{
			Node* ep = start;
			while (ep->getNext() != NULL)
			{
				ep = ep->getNext();
			}
			ep->setNext(nm);
		}
	}
	
	void addAtBegin(complex data)
	{
		Node* nm = new Node(data);
		if (this->start == NULL)
		{
			this->start = nm;
		}
		else
		{

			nm->setNext(start);
			this->start = nm;
		}
	}
	
	void delFromBeg()
	{
		if (start == NULL)
		{
			cout << "\n Empty \n";
		}
		else
		{
			Node* temp;
			temp = start;
			this->start = start->getNext();
			delete temp;
		}

	}
	
	int delFromEnd()
	{
		if (this->start == NULL)
		{
			cout << "List Is Empty" << endl;
			return 0;
		}
		else
		{
			Node* ep = start;
			while (ep->getNext()->getNext() != NULL)
			{
				ep = ep->getNext();
			}
			Node* temp;
			temp = ep->getNext();
			ep->setNext(NULL);
			delete temp;
		}
	}
	
	void addAtPosition(complex data, int pos)
	{
		Node* new_node = new Node(data);
		if (pos == 0)
		{
			addAtBegin(data);
		}
		else
		{
			Node* ep = start;
			for (int i = 1; i < pos; i++)
			{
				ep = ep->getNext();
			}
			Node* temp = ep->getNext();
			ep->setNext(new_node);
			new_node->setNext(temp);
		}
	}

	void removeByPosition(int pos)
	{
		if (pos == 0)
		{
			delFromBeg();
		}
		else
		{
			Node* ep = start;
			for (int i = 1; i < pos; i++)
			{
				while (ep->getNext()->getNext() != NULL)
				{
					ep = ep->getNext();
				}

			}
			if (ep->getNext()->getNext() == NULL)
			{
				delFromEnd();
			}
			else
			{
				Node* temp = ep->getNext();
				ep->setNext(temp->getNext());
				delete temp;
			}
		}
	}
	void display()
	{
		if (this->start == NULL)
		{
			cout << "List Is Empty" << endl;
			return;
		}
		else
		{
			Node* ep = start;
			while (ep->getNext() != NULL)
			{
				cout << "\n " << ep->getData() << endl;
				ep = ep->getNext();

			}
			cout << "\n " << ep->getData() << endl;

		}
	}
};

void main()
{
	LinkList l1;
	complex c1;
	cin>>c1;
	l1.addAtEnd(c1);    
	
	complex c3;
	cin >> c3;
	l1.addAtBegin(c3);	
	l1.display();

	cout<<"\n\nAdd at position 3\n";
	complex c11;
	cin >> c11;
	l1.addAtPosition(c11, 3);
	l1.display();

	cout<<"\n\n Remove from position 1\n";
	l1.removeByPosition(1);
	l1.display();

	cout<<"\n\n Delete from beg\n";
	l1.delFromBeg();
	l1.display();

	cout<<"\n\n Delete from end";
	l1.delFromEnd();
	l1.display();

	getch();
}