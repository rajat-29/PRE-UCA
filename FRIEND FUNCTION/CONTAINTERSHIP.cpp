#include<iostream>
#include<string.h>
using namespace std;

class address
{
	char city[50];
	char state[50];
	
	public:
		void get()
		{
			cout<<"ENTER CITY - ";
			cin>>city;
			cout<<"ENTER STATE - ";
			cin>>state;
		}
		void put()
		{
			cout<<"CITY : "<<city<<endl;
			cout<<"STATE : "<<state<<endl;
		}
};

class student
{
	char name[50];
	int roll;
	address add;
	
	public:
		void get()
		{
			cout<<"ENTER NAME - ";
			cin>>name;
			cout<<"ENTER ROLL NO - ";
			cin>>roll;
			add.get();
		}
		
	    void put()
	    {
	        cout<<"NAME : "<<name<<endl;
			cout<<"ROLL NO : "<<roll<<endl;
			add.put();
		}
};

int main()
{
	student ob;
	ob.get();
	ob.put();
	return 0;
}
