#include<iostream>
using namespace std;
class Myarray
{
	int size;
	int *arr;
public:
	Myarray()
	{
		this->size=0;
		this->arr=NULL;
	}

	Myarray(int s)
	{
		int i;
		cout<<"\n parameterized\n";
		this->size = s;
		this->arr = new int [this->size];
		for(i = 0; i < this->size; i++)
		{
			this->arr[i]=0;
		}
	}

	Myarray(Myarray& o)
	{
		cout<<"\n copy constructor";
		this->size=o.size;
		this->arr = new int [o.size];
		for(int i = 0; i < o.size; i++)
		{
			this->arr[i] = o.arr[i];
		}
	}


	void setArr(int* mainArr)
	{
		try
		{
			if(this->arr!=NULL)
			{
				for(int i = 0; i < this->size; i++)
				{
					arr[i]=mainArr[i];
				}
			}
			else
			{
				throw 0;
			}
		}
		catch(int error)
			{
				cout<<"\nArray is empty\n";
			}
	}

	int get(int index)
	{
		return this->arr[index];
	}

	void display()
	{
		cout<<"\n\n";
		try
		{
			if(this->arr!=NULL)
			{
				for(int i = 0; i < this->size; i++)
				{
					cout<<"  "<<arr[i];
				}

			}
			else
			{
				throw 0;
			}
		}
		catch(int error)
		{
			cout<<"\n there is nothing to display \n";
		}
	}

	friend ostream& operator<< (ostream& ,Myarray&);
	int& operator[](int index)
	{
		try
		{
			if(index >= size)
			{
				throw 0;
			}
			else
			{
				return this->arr[index];
			}
		}
			catch(int error)
			{
				cout<<"\n Array index out of size";
			}
		}

};

void main()
{
	Myarray a1(5);
	int arr[5]={10,20,30,40,50};
	a1.setArr(arr);
	a1.display();

	cout<<a1;

	cout<<"\n\n";
	cout<<a1.get(2);
	cout<<"\n\n";

	cout<<a1[0];
	cout<<"\n\n";

	a1[0]=199;
	cout<<a1;
}

ostream& operator<< (ostream& out,Myarray& m)
{
	cout<<"\n\n";
	for(int i = 0; i < m.size; i++)
	{
		cout<<"  "<<m.arr[i];
	}
	return out;
}

