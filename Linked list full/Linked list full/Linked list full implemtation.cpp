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

	void insertbypos(int data,int pos)
	{
		int i=0;
		Node* ep=start;
		Node* new_node = new Node(data);
		for(i=0;i<pos;i++)
		{
			ep=ep->getNext();
		}
		Node* temp=ep->getNext();
		ep->setNext(new_node);
		new_node->setNext(temp);
	}

	int delete_from_end()
	{
		int data=0;
		Node* ep=start;
		while(ep -> getNext() -> getNext() != NULL)
		{
			ep=ep->getNext();
		}
		Node* temp= ep-> getNext();
		data = temp->getData();
		ep->setNext(NULL);
		delete temp;
		return data;
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
	 linklist l1;
	 l1.display();
	 l1.addAtTheEnd(10);
	 l1.addAtTheEnd(20);
	 l1.addAtTheEnd(30);
	 l1.display();
	 l1.insertbypos(22,0);
	 //l1.deleteFromBeg();
	//cout<<"\n\n\n";
	 //l1.display();
	 cout<<"\n\n\n";
	 //l1.addAtTheBeg(100);
	l1.delete_from_end();
	l1.display();
 }