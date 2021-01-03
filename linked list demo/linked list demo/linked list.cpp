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
void main()
{
	Node* ptr;
	ptr = new Node(10);

	cout<<"Data is : "<<ptr->getData()<<"\n\n";

	cout<<"Next is : "<<ptr->getNext()<<"\n\n";

	ptr->setData(20);

	Node* ptr1 = new Node (55);
	ptr -> setNext (ptr1);

	Node* ptr2 = new Node (55);
	ptr1 -> setNext (ptr2);
	
	cout<<"Data is : "<<ptr->getData()<<"\n\n";

	cout<<"Next is : "<<ptr->getNext()<<"\n\n";

	cout<<"Data is : "<<ptr1->getData()<<"\n\n";

	cout<<"Next is : "<<ptr1->getNext()<<"\n\n";

	cout<<"Data is : "<<ptr2->getData()<<"\n\n";

	cout<<"Next is : "<<ptr2->getNext()<<"\n\n";
}