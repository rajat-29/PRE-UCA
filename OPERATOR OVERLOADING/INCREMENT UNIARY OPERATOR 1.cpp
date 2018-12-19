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
			cout<<a<<" + i "<<b<<endl;
		}
	  /*  void operator++()   // method without return type
		{
			++a;
			++b;
		}*/
		
		complex operator++()   // method with return type
		{
			return complex(++a,++b);
		}
};
int main()
{
	complex c;
	complex c1(4,5);
    c=++c1;
    c.put();
}
