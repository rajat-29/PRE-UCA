#include<iostream>
#include<string.h>

using namespace std;

class complex
{
	int a,b;
	public:
		complex():a(0),b(0){}
		complex(int x,int y):a(x),b(y){}
		void put()
		{
			if(b<0)
			cout<<a<<" - i "<<-b;
			else
			cout<<a<<" + i "<<b;
		}
		complex operator-()   // first method for passing object
		{
			complex t;
			t.a=-a;
			t.b=-b;
			return t;
		}
	/*	complex operator-()    // second method for object
		{
			return complex(-a,-b);
		}*/
};
int main()
{
	complex c;
	complex c1(4,5);
    c=-c1;
	c.put();
}
