#include<iostream>
using namespace std;
class complex
{
	int input1;
	int input2;
	int ans;
public:
	void setInput1(int input)
	{
		this->input1=input;
	}
	void setInput2(int input)
	{
		this->input2=input;
	}
	int getInput1()
	{
		return this->input1;
	}
	int getInput2()
	{
		return this->input2;
	}
	void display()
	{
		cout<<this->getInput1()<<"\t"<<this->getInput2()<<"\n";
	}
	void display_result()
	{
		cout<<" the ans of and operation is \n"<<ans;
		cout<<"\n\n";
	}
	complex and(complex c1)
	{
		complex temp;
		temp.ans=this->input1&&c1.input2;
		return temp;
	}

	complex or(complex c1)
	{
		complex temp;
		temp.ans=this->input1||c1.input2;
		return temp;
	}
		void display_result1()
	{
		cout<<" the ans of OR operation is \n"<<ans;
		cout<<"\n\n";
	}
};

void main()
{
	complex c1,c2,c3;
	c1.setInput1(10);
	c1.setInput2(10);
	c1.display();
	c2=c1.and(c1);
	c3=c1.or(c1);
	c3.display_result1();
	c2.display_result();
}