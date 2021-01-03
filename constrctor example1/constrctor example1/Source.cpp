#include<iostream>
using namespace std;
class complex
{
	int image;
	int real;
public:
	void setImage(int i)
	{
		this->image=i;
	}
	void setReal(int r)
	{
		this->real=r;
	}
	int getImage()
	{
		return image;
	}
	int getReal()
	{
		return real;
	}
	void display()
	{
		cout<<" "<<getImage()<<"\t"<<getReal()<<"\n\n";
	}
	complex()
	{
		cout<<"constructor \n";
		this->real=0;
		this->image=0;
	}
};

void main()
{
	int i,r;
	complex c1,c2;
	c2.display();
	cout<<"enter the real \n";
	cin>>r;
	cout<<"enter the image \n";
	cin>>i;
	c1.setImage(i);
	c1.setReal(r);
	c1.display();
}