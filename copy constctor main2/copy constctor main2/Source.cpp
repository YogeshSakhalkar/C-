using namespace std;
#include<iostream>
class Myclass
{
	int size;
	int* arr;
public:
	Myclass()
	{
		cout<<"\n Default const";
		this->size=0;
		this->arr=NULL;
	}

	Myclass(int size)
	{
		cout<<"\n Parameterized const";
		this->size=size;
		this->arr = new int[this->size];
		for(int i = 0; i < this->size; i++)
		{
			this->arr[i]=0;
		}
	}

	void display()
	{
		cout<<"\n";
		if(this->arr != NULL)
		{
			for(int i=0; i < this->size; i++)
			{
				cout<<" "<<this->arr[i];
			}
		}
		else
		{
			cout<<"Empty";
		}
	}
	
	void setArr(int * minArr)
	{
		int i;
		if(this->arr != NULL)
		{
			for(i=0; i < this->size; i++)
			{
				arr[i]=minArr[i];
			}
		}
		else
		{
			cout<<"Empty";
		}
	}
	
	Myclass(Myclass& o)
	{
		cout<<"\n copy constuctor";
		this->size = o.size;

		this->arr = new int[o.size];

		for(int i=0; i < this->size; i++)
		{
			this->arr[i] = o.arr[i];
		}
	}

	void operator=(Myclass& o)
	{
		cout<<"\n assignment";
		this->size=o.size;

		if(this->arr != NULL)
			delete[] this->arr;

		this->arr= new int[o.size];

		for(int i=-0; i < this->size; i++)
		{
			this->arr[i]=o.arr[i];
		}
	}
};
void main()
{
	Myclass a1(3);
	int brr[3]={10,20,30};
	a1.setArr(brr);
	a1.display();

	cout<<"\n";
	
	Myclass a2(3);
	a2.display();
	a2=a1;
	a2.display();
	cout<<"\n\n";
}