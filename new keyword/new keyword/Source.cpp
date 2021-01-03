#include<iostream>
using namespace std;
void main()
{
	int *ptr;
	int *p;
	p=new int(5);
	ptr=new int[5];
	cout<<"enter the 5 elements\n";
	int i;
	for(i=0;i<5;i++)
	{
		cin>>ptr[i];
	}
	cout<<"\n the enter elements are \n";
	for(i=0;i<5;i++)
	{
		cout<<"\n"<<ptr[i];
	}
	cout<<"\n\n";
	delete[] ptr;
	delete p;
}