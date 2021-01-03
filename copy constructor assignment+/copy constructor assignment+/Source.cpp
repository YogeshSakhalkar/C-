using namespace std;
#include<iostream>
class Myarray
{
	int size;
	int *arr;
public:
	Myarray()
	{
		cout<<"\n Default Constructor";
		this->size=0;
		this->arr=NULL;
	}
	
	Myarray(int size)
	{
		cout<<"\n parameterized construtor";
		this->size=size;
		this->arr=new int[this->size];
		for(int i = 0; i < this->size; i++)
		{
			this->arr[i]=0;
		}
	}
	
	Myarray(Myarray& o)
	{
		cout<<"copy constructor";
		this->size=o.size;
		
		this->arr=new int[o.size];
		for(int i = 0; i < this->size; i++)
		{
			this->arr[i]=o.arr[i];
		}
	}

	/*void concat(int *a1,int* brr )
	{
		cout<<"\n the addition is:";
		int i;
			int j=0;
			for(i = 0; i < this->size-3; i++)
			{
				this->arr[i]=a1[i];
			}
			
			for(j = 0; j < this->size-5;j++)
			{
				this->arr[i]=brr[j];
				i++;
			}
			
			for(j = 0; j < i;j++)
			{
				cout<<" "<<this->arr[j];
			}
			
	
	}*/

	Myarray& operator+(Myarray& a,Myarray& b)
	{
		Myarray temp;
			int i;
			int j=0;
			for(i = 0; i < this->size; i++)
			{
				temp.arr[i]=this->arr[i];
			}
			j=i;
			for(i = 0; i < b.size;i++)
			{
				temp.arr[j]=b.arr[i];
				j++;
			}
			return temp;
	}


	void setArr(int *Array)
	{
		if(arr != NULL)
		{
			for(int i = 0; i < this->size; i++)
			{
				arr[i]=Array[i];			
			}
		}
		else
		{
			cout<<"\nEmpty";
		}
	}

	void display()
	{
		if(arr != NULL)
		{
			for(int i = 0; i < this->size; i++)
			{
				cout<<" "<<arr[i];
			}
		}
		else
		{
			cout<<"\nEmpty";
		}
	}

};

void main()
{
	Myarray a1(3);
	int arr[3]={10,20,30};
	a1.setArr(arr);
	a1.display();

	cout<<"\n\n";

	Myarray a2(5);
	int brr[5]={40,50,60,70,80};
	a2.setArr(brr);
	a2.display();

	cout<<"\n\n";
	Myarray a3;
	//a3.concat(arr,brr);
	a3=a1+a2;
	a3.display();
}