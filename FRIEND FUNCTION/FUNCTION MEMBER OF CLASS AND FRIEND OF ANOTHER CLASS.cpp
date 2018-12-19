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
		 void add(integer in);
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
		friend void complex::add(integer in);
};

void complex::add(integer in)
{
	a=a+in.n;
	b=b+in.n;
}

int main()
{
	complex ob;
	integer ob1;
	ob.get();
	ob1.get();
	ob.add(ob1);
	ob.display();
}
