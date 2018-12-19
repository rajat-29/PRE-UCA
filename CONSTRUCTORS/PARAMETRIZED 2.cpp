#include<iostream>
using namespace std;

class complex
{
	int a,b;
	public:
		complex(int x,int y)
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
	int d,e;
	cout<<"ENTER NO - ";
	cin>>d>>e;
	complex c(d,e);
	c.put();
	return 0;
}
