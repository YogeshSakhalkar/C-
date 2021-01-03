#include<iostream>
using namespace std;

class bubble_sort
{
	int temp,k,j;
public:
	void sort(int *interger_array,int i)
	{
		for(k=0;k<i;k++)
		{
			for(j=0;j<i-1;j++)
			{
				if(interger_array[j]>interger_array[j+1])
				{
					temp=interger_array[j];
					interger_array[j]=interger_array[j+1];
					interger_array[j+1]=temp;
				}
			}
		}
	}

	void sort(char *char_array,int i)
	{
		for(k=0;k<i;k++)
		{
			for(j=0;j<i-1;j++)
			{
				if(char_array[j]>char_array[j+1])
				{
					temp = char_array[j];
					char_array[j] = char_array[j+1];
					char_array[j+1]=temp;
				}
			}
		}
	}
};

void main()
{
	int integer_array[5]={20,40,10,1,90};
	int i;
	cout<<"\n before sorting  \n";
	for(i=0;i<5;i++)
	{
		cout<<"\t"<<integer_array[i];
	}
	bubble_sort b1;
	b1.sort(integer_array,5);
	cout<<"\n\n\n After sorting  \n";
	for(i=0;i<5;i++)
	{
		cout<<"\t"<<integer_array[i];
	}

	cout<<"\n\n";

	char char_arry[5]={'z','h','i','f','a'};
	bubble_sort b2;
	cout<<"\n before sorting  \n";
	for(i=0;i<5;i++)
	{
		cout<<"\t"<<char_arry[i];
	}
	b2.sort(char_arry,5);
	cout<<"\n\nafter sorting\n";
	for(i=0;i<5;i++)
	{
		cout<<"\t"<<char_arry[i];
	}
	cout<<"\n\n";
}