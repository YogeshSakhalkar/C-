#include<iostream>
using namespace std;

class binary_search
{
	int first,last,mid,num;

public:
	int search(int* arr,int size)
	{
		cout << "\nEnter the number to be search:";
		cin >> num;
		first = 0;
		last = size - 1;
		
		while (last >= first)
		{
			mid = (first + last) / 2;
			if (num > arr[mid])
				first = mid + 1;
			else if (num < arr[mid])
				last = mid - 1;
			else
			{
				return 1;
			}
		}
	}
};

void main()
{
	int n, result;
	binary_search b1;
	int a[5];
	cout << "\nEnter 5 integers number in ascending order : ";
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}

	result=b1.search(a, 5);
	if (result == 1)
		cout << "\nNumber Found:";
	else
		cout << "\Number not Found:";

	cout << "\n\n";
}