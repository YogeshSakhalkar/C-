#include<iostream>
using namespace std;
template<class T>
class bubble_sort
{
	int k,j;
public:
	void sort(T *array,T i)
	{
	 	T temp;
		for(k=0;k<i;k++)
		{
			for(j=0;j<i-1;j++)
			{
				if(array[j] > array[j+1])
				{
					temp = array[j];
					array[j] = array[j+1];
					array[j+1] = temp;
				}
			}
		}
	}

};

void main()
{
	bubble_sort <int> b1;
	int integer_array[5]={20,40,10,1,90};
	int i;
	cout<<"\n before sorting  \n";
	for(i=0;i<5;i++)
	{
		cout<<"\t"<<integer_array[i];
	}
	
	b1.sort(integer_array,5);
	bubble_sort <char> b2;
	cout<<"\n\n\n After sorting  \n";
	for(i=0;i<5;i++)
	{
		cout<<"\t"<<integer_array[i];
	}

	cout<<"\n\n";

	char char_arry[5]={'z','h','i','f','a'};
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