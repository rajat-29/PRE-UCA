#include<iostream>
using namespace std;

class base
{
	public:
		int a;
		base(int x)
		{
			a=x;
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
		int b;
		derive(int x,int y):base(x)
		{
			b=y;
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
        int c;
		derive2(int x,int y,int z):derive(x,y)
		{
			c=z;
			cout<<"DERIVE2 CONSTRUCTOR CALLED"<<endl;
		}
		~derive2()
		{
			cout<<"DERIVE2 DESTRUCTOR CALLED"<<endl;
		}
		void show()
		{
			cout<<a<<" "<<b<<" "<<c<<endl;
		}
};

int main()
{
	derive2 ob(2,3,4);
	ob.show();
}
