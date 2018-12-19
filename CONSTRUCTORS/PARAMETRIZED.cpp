#include<iostream>
using namespace std;

class complex
{
	int a,b;
	public:
		complex(int x=5,int y=6)
		{
		a=x;
		b=y;
		}
		
		void put()
		{
			cout<<a<<b;
		}
};

int main()
{
	complex c;
	c.put();
	return 0;
}
