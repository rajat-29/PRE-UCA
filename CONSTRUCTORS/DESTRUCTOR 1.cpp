#include<iostream>
using namespace std;

class complex
{
	public:
		~complex()
		{
			cout<<"DESTRUCTION"<<endl;
		}
		void put()
		{
			cout<<"HELLO WORLD"<<endl;
		}
};

void fun()
{
	complex ob,ob1,ob2;
	ob.put();
	ob1.put();
	ob2.put();
}

int main()
{
fun();
	return 0;
	
}
