#include<iostream>
#include<cstdio>
#include<cmath>
#include<string.h>
#include<iomanip>
using namespace std;

class publish
{
	public:
		int price;
		string book;	
};

class book1:public publish
{
	public:
	int page;
	void getdata()
	{
		cout<<"ENTER NAME";
		cin>>book;
		cout<<"ENTER PRICE";
		cin>>price;
		cout<<"ENTER PAGE";
		cin>>page;
	}
	void display()
	{
		cout<<"BOOK = "<<book<<endl<<"PRICE = "<<price<<endl<<"PAGE = "<<page;
	}
};

class cd:public publish
{
	public:
	int min;
	void getdata()
	{
		cout<<"ENTER NAME";
		cin>>book;
		cout<<"ENTER PRICE";
		cin>>price;
		cout<<"ENTER MIN";
		cin>>min;
	}
	void display()
	{
		cout<<endl<<endl;
		cout<<"CD = "<<book<<endl<<"PRICE = "<<price<<endl<<"MIN = "<<min;
	}
};


int main()
{
	book1 ob1;
	cd ob2;
	ob1.getdata();
	ob2.getdata();
	ob1.display();
	ob2.display();
	return 0;
}
