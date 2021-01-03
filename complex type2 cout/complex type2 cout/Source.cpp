#include<iostream>
using namespace std;
class complex
{
	int real;
	int image;
public:

	complex add(complex c2)
	{
		complex temp;
		temp.real=this->real+c2.real;
		temp.image=this->getImage()+c2.image;
		return temp;
	}
	
	complex();
	complex(int,int);
	complex(complex&);

	void setReal(int);
	void setImage(int);
	int getReal();
	int getImage();
	void display();
};

ostream& operator<<(ostream& ,complex& );
void operator>>(istream& ,complex& );
void main()
{
	complex c1;
	cout << c1; // operator<<(cout,c1);
	//c1.display();

	complex c2(10,20);
	cout << c1 << c2;
	//c2.display();

	complex c3;
	cin>> c3;
	cout<< c3;
	//c3.display();
}

	void complex :: setReal(int input)
	{
		real=input;
	}

	void complex :: setImage(int input)
	{
		image=input;
	}
	
	int complex :: getReal()
	{
		return real;
	}
	
	int complex :: getImage()
	{
		return image;
	}

	complex ::complex()
	{
		this->image=0;
		this->real=0;
	}

	complex :: complex(int i,int r)
	{
		this->image=i;
		this->real=r;
	}

	complex :: complex(complex& c)
	{
		this->image=c.image;
		this->real=c.real;
	}

	void complex :: display()
	{
		printf("\n%d \t %d\n",this->getImage(),this->getReal());
	}



	ostream& operator<<(ostream& o,complex& c1)
	{
		o<<"\n"<<c1.getReal()<<" + "<<c1.getImage()<<" i \n";
		return o;
		
	}
	

	void operator>>(istream& i,complex& c1)
	{
		int imag,real;
		cout<<"\n enter the imag value: \n";
		i>>imag;
		c1.setImage(imag);
		cout<<"\n enter the rael value \n";
		i>>real;
		c1.setReal(real);
	}
	