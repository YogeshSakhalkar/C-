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
};//Node class end here

class linklist 
{
	Node* start;
public:
	linklist()
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

	int getsize()
	{
		int count=0;
		Node* ep=start;
		while(ep->getNext()!=NULL)
			{
				ep=ep->getNext();
				count++;
			}
			return count;
	}

	void Reverse_SLL()
	{
		int i=0;
		int *ptr;
		if(this->start==NULL)
		{
			cout<<"\nlinked list is empty\n";
			return;
		}
		else
		{
			ptr = new int[getsize()]; 
			Node* ep=start;
			while(ep->getNext()!=NULL)
				{
					ptr[i] = ep->getData();
					i++;
					ep=ep->getNext();
				}

				ptr[i] = ep->getData();
				cout<<"\n";

				for(i=getsize();i>=0;i--)
				{
					cout<<ptr[i]<<"\t";
				}
		}
	}
};// Linked list class end here

 void main()
 {
	 linklist l1;
	 l1.display();
	 l1.addAtTheEnd(10);
	 l1.addAtTheEnd(20);
	 l1.addAtTheEnd(30);
	 l1.display();
	 l1.getsize();
	 l1.Reverse_SLL();
	 /*l1.deleteFromBeg();
	cout<<"\n\n\n";
	 l1.display();
	 cout<<"\n\n\n";
	 l1.addAtTheBeg(100);
	 l1.display();*/
 }