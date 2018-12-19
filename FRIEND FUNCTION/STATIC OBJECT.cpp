#include<iostream>
using namespace std;

class abc
{
	int a=1;
	int b=1;
	
	public:
		void change()
		{
			a++;
			b++;
		}
		void put()
		{
			cout<<a<<b;
		}
};

void fun()
{
	static abc ob;
	ob.change();
	ob.put();
}

int main()
{
	fun();
	fun();
}






