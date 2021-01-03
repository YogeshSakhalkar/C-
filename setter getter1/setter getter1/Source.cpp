#include<stdio.h>
#include<string.h>
struct book
{
	int price;
	int no_of_pages;
	char book_name[20];
	
	void setBook_price(int input)
	{
		this->price=input;
	}
	void setBook_pages(int input)
	{
		this->no_of_pages=input;
	}
	void setBook_names(char* input)
	{
		strcpy(book_name,input);
	}
	int getBook_price()
	{
		return this->price;
	}
	int getBook_pages()
	{
		return this->no_of_pages;
	}
	char* getBook_names()
	{
		return this->book_name;
	}
};
void main()
{
	book b1;
	b1.setBook_names("C++");
	b1.setBook_pages(670);
	b1.setBook_price(1000);
	printf("\n\n The book name is %s",b1.getBook_names());
	printf("\n\nThe number of pages are %d",b1.getBook_pages());
	printf("\n\nThe book price is %d",b1.getBook_price());
}