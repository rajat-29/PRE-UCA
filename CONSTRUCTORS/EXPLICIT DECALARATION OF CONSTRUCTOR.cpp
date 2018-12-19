#include<iostream>
using namespace std;

class complex
{
		public:
	int a,b;

		complex()
		{
			a=2;
			b=3;
		}
	/*	complex(complex &i)
		{
			a=i.a;
			b=i.b;
		}*/
		complex(int x,int y)
		{
			a=x;
			b=y;
		}
		void put()
		{
			cout<<a<<" + "<<b<<endl;
		}
};

int main()
{
	complex c1;
	complex c[3]={complex(),complex(5,6),complex(c1.a,c1.b)};
	c[0].put();
	c[1].put();
	c[2].put();
	
}
