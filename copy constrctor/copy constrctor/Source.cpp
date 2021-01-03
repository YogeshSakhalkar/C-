using namespace std;
#include<iostream>
class myarray
{
	int size;
	int* arr;

public:
	myarray()
	{
		this->size=0;
		this->arr=NULL;
	}
	myarray(int size)
	{
		cout<<"\nParameterized construtor\n";
		this->size=size;
		this->arr=new int[this->size];
		for(int i=0;i<this->size;i++)
		{
			this->arr[i]=0;
		}
	}
	void display()
	{
		cout<<"\n";
		if(this->arr!=NULL)
		{
			for(int i = 0; i < this->size; i++)
			{
				cout<<" "<<this->arr[i];
			}
		}
		else
		{
			cout<<"Empty";
		}
	}

	void setArr(int* minarr)
	{
		if(this->arr != NULL)
		{
			for(int i=0; i < this->size; i++)
			{
				arr[i]=minarr[i];
			}
		}
		else
		{
			cout<<"Empty";
		}
	}

};

void main()
{
	myarray a1(5);

	int minarr[5];
	for(int i=0;i<5;i++)
	{
		cout<<"\n Enter the array values:";
		cin>>minarr[i];
	}
	a1.setArr(minarr);
	a1.display();
	myarray a2(3);
	int brr[3] = { 10, 20, 30 };
	a2.setArr(brr);
	a2.display();

}
