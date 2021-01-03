#include<iostream>
using namespace std;
class product
{
	char name[20];
	float price;
	int product_id;
public:
	void setName(char* n)
	{
		strcpy(this->name,n);
	}

	void setPrice(float p)
	{
		this->price=p;
	}

	void setProduct_id(int i)
	{
		this->product_id=i;
	}
	
	char* getName()
	{
		return this->name;
	}

	float getPrice()
	{
		return this->price;
	}

	int getProduct_id()
	{
		return this->product_id;
	}

	void display()
	{
		cout<<"\nthe product name is : "<<name;
		cout<<"\nthe price is : "<<price;
		cout<<"\nthe product id is : "<<product_id;
	}

	product()
	{
		cout<<"\nproduct default construtor called";
		strcpy(name,"name not given");
		this->price=0;
		product_id=0;
	}

	product(char* n,float p,int i)
	{
		cout<<"\nproduct parameterized constructor called";
		strcpy(name,n);
		price=p;
		product_id=i;
	}
};//product class ends here

class book : public product
{
	char Author_name[20];
	int no_of_pages;
public:
	void setAuthor_Name(char* n)
	{
		strcpy(this->Author_name,n);
	}

	void setNo_of_pages(int i)
	{
		this->no_of_pages=i;
	}
	
	char* getAuthor_Name()
	{
		return this->Author_name;
	}

	int getNo_of_pages()
	{
		return this->no_of_pages;
	}

	void display()
	{
		product::display();
		cout<<"\nthe author name is : "<<Author_name;
		cout<<"\nthe no of pages is : "<<no_of_pages;
	}

	book() : product()
	{
		cout<<"\nbook default construtor called";
		strcpy(Author_name,"name not given");
		no_of_pages=0;
	}

	book(char* n,float p,int i,char* An,int pages):product(n,p,i)
	{
		cout<<"\nbook parameterized constructor called";
		strcpy(Author_name,An);
		no_of_pages=pages;
	}
};//book class ends here

class bucket : public product
{
	float capacity_of_bucket_in_liters;
public:
	void setCapacity_of_bucket_in_liters(float c)
	{
		this->capacity_of_bucket_in_liters=c;
	}

	float getcapacity_of_bucket_in_liters()
	{
		return this->capacity_of_bucket_in_liters;
	}

	void display()
	{
		product :: display();
		cout<<"\nthe capacity of bucket in liters is : "<<capacity_of_bucket_in_liters;
	}

	bucket() : product()
	{
		cout<<"\nbucket default construtor called";
		this->capacity_of_bucket_in_liters=0;
	}

	bucket(char* n,float p,int i,float c) : product(n,p,i)
	{
		cout<<"\nbucket parameterized constructor called";
		capacity_of_bucket_in_liters=c;

	}
};//bucket class ends here

void main()
{
	book b2;
	b2.display();

	cout<<"\n\n";

	bucket bu1;
	bu1.display();

	cout<<"\n\n";

	book b1("c++",456.5,19029,"balaguruswami",898);
	b1.display();

	cout<<"\n\n";

	bucket bu2;
	bu2.setName("nirma");
	bu2.setCapacity_of_bucket_in_liters(200);
	bu2.setPrice(500);
	bu2.setProduct_id(123221);
	bu2.display();

	cout<<"\n\n";
}