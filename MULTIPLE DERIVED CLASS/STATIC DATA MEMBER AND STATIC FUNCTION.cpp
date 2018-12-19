#include<iostream>
using namespace std;

class abc
{
	static int c;
	
	public:
		void increment()
		{
			c++;
		}
		void display()
		{
			cout<<c;
		}
};

int abc::c;

int main()
{
	abc ob,ob1,ob2;
	
	ob.increment();
	ob1.increment();
	ob2.increment();
	
	ob.display();
	ob1.display();
	ob2.display();
}
