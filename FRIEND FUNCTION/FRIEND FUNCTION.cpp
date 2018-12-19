#include<iostream>
using namespace std;

class addition
{
	int a,b;
	
	public:
		void get()
		{
			cin>>a>>b;
		}
		
		void put()
		{
			cout<<a<<b;
		}
		
	friend void increment(addition &ob);	
};

void increment(addition &ob)
{
	ob.a=ob.a+10;
	ob.b=ob.b+10;
}

int main()
{
	addition ob;
	ob.get();
	increment(ob);
	ob.put();
	return 0;
}
