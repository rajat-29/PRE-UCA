#include<iostream>
using namespace std;

class dynamic
{
	int *p;
	public:
		~dynamic()
		{
				cout<<"DESTRUCTION"<<endl;
		}		
		dynamic()
		{
				p=new int(5);
		}
		dynamic(int x)
		{
			p=new int(x);
		}
		dynamic(dynamic &ab)
		{
			p=new int;
			*p=ab.value();
		}
		int value()
		{
			return *p;
		}
};

int main()
{
	dynamic ob;
	dynamic ob1(7);
	dynamic ob2(ob1);
    cout<<ob.value()<<endl;
	cout<<ob1.value()<<endl;
	cout<<ob2.value()<<endl;
}
