#include<iostream>
using namespace std;
class myclass
{
	int a,b;
public:
	void setA(int A)
	{
		this->a=A;
	}
	void setB(int B)
	{
		this->b=B;
	}
	int getA()
	{
		return this->a;
	}
	int getB()
	{
		return this->b;
	}
	myclass()
	{
		cout<<"\nDefault Constructor";
		this->a=0;
	}
	myclass(int a,int b)
	{
		cout<<"\nParameterized Constructor";
		this->a=a;
		this->b=b;
	}
	myclass(myclass& m)
	{
		cout<<"\nCopy Constructor";
		this->a=m.a;
		this->b=m.b;
	}
	myclass operator=(myclass& o)
	{
		cout<<"\napna wala assignment ";
		this->a=o.a;
		this->b=o.b;
	}
};
myclass myfun(myclass);
void main()
{
	myclass c1;
	myclass c2(10,20);
	myclass c3(c2);
	myfun(c1);
	cout<<"\n\n\n";
	myclass temp;
	temp=myfun(c1);
	cout<<"\n\n\n";
}
myclass myfun(myclass c1)
{
	cout<<"\nIn Fuctions";
	return c1;
}