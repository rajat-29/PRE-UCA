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
         friend complex operator+(complex ob,complex ob1);   // friend function initilized
};

 complex operator+(complex ob,complex ob1)   // 2 objects are created for c1 and c2
{
	return complex(ob.a+ob1.a,ob.b+ob1.b); // reutrning addition of c1 and c2
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
