using namespace std;
#include<iostream>

class Base
{
public:
	virtual void somefun()
	{
	}
};

class Derived : public Base
{

};

void main()
{
	Base baseObj;
	Derived deriveObj;
	Base * basePtr;
	basePtr = &deriveObj;

	cout<<"\n type of base ptr is : "<<typeid(basePtr).name();
	cout<<"\n type of *base ptr is : "<<typeid(*basePtr).name();

	if(strcmp(typeid(*basePtr).name()," class Derived")==0)
	{
		cout<<"\n mera kuch bhi kam";
	}

	cout<<"\n type of baseObj is : "<<typeid(baseObj).name();
	cout<<"\n type of *baseObj is :"<<typeid(deriveObj).name();

}











