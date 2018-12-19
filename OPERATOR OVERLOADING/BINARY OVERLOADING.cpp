// add 2 complex numbers

#include<iostream>
#include<string.h>

using namespace std;

class complex
{
	int a,b;
	public:
		complex():a(0),b(0){}   // constructors initializing
		complex(int x,int y):a(x),b(y){}   // constructors initializong
		void put()
		{
			cout<<a<<" + i "<<b;
		}
        complex operator+(complex ob);   // one object is created for c2 to call
};

complex complex :: operator+(complex ob)   // c1 will be called initially
{
	return complex(a+ob.a,b+ob.b);   // c1 is calling itself and ob.a is used for c2 to call
}
int main()
{
	int x,y;
	cin>>x>>y;
	complex c1(x,y);
	cin>>x>>y;
	complex c2(x,y);
	complex c;
	c=c1+c2;
	c.put();
}
