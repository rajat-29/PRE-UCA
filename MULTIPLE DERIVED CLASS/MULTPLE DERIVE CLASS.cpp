#include<iostream>
using namespace std;

class base
{
	public:
		base()
		{
			cout<<"BASE CONSTRUCTOR CALLED"<<endl;
		}
		~base()
		{
			cout<<"BASE DESTRUCTOR CALLED"<<endl;
		}
};

class derive:public base
{
	public:
		derive():base()
		{
			cout<<"DERIVE CONSTRUCTOR CALLED"<<endl;
		}
		~derive()
		{
			cout<<"DERIVE DESTRUCTOR CALLED"<<endl;
		}
};

class derive2:public derive
{
	public:

		derive2():derive()
		{
			cout<<"DERIVE2 CONSTRUCTOR CALLED"<<endl;
		}
		~derive2()
		{
			cout<<"DERIVE2 DESTRUCTOR CALLED"<<endl;
		}
};

int main()
{
	derive2 ob;
}
