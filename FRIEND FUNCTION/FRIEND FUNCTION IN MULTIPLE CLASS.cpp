#include<iostream>
#include<math.h>

using namespace std;

class integer;
class complex
{
	int a,b;
	public:
		void get()
		{
			cout<<"ENTER NO - ";
			cin>>a;
			cout<<"ENTER NO - ";
			cin>>b;
		}
		void display()
		{
			cout<<a<<" + i"<<b;
		}
		friend void add(complex &c,integer in);
};

class integer
{
	int n;
		public:
		void get()
		{
			cout<<"ENTER INTEGER - ";
			cin>>n;
		}
		void display()
		{
			cout<<n;
		}
		friend void add(complex &c,integer in);
};

void add(complex &c,integer in)
{
	c.a=c.a+in.n;
	c.b=c.b+in.n;
}

int main()
{
	complex ob;
	integer ob1;
	ob.get();
	ob1.get();
	add(ob,ob1);
	ob.display();
}
