#include<iostream>
using namespace std;

namespace pune
{
	class complex
	{
		int real;
		int image;
	public:
		void setReal(int input)
		{
			real=input;
		}
		void setImage(int input)
		{
			image=input;
		}
		int getReal()
		{
			return real;
		}
		int getImage()
		{
			return image;
		}
		void display()
		{
			cout<<"\n pune class is been called";
			cout<<"\n real is : "<<real;
			cout<<"\n image is : "<<image;
		}
	};
}

namespace mumbai
{
	class complex
	{
		int real;
		int image;
	public:
		void setReal(int input)
		{
			real=input;
		}
		void setImage(int input)
		{
			image=input;
		}
		int getReal()
		{
			return real;
		}
		int getImage()
		{
			return image;
		}
		void display()
		{
			cout<<"\n pune class is been called";
			cout<<"\n real is : "<<getreal;
			cout<<"\n image is : "<<image;
		}
	};
}

void main()
{
	pune :: complex obj1;
	mumbai :: complex obj2;

	obj1.setImage(30);
	obj1.display();

	obj2.setReal(10);
	obj2.display();
}