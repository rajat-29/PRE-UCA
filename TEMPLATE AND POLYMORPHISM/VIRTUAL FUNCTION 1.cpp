#include<iostream>
using namespace std;

class base
{
	public:
		virtual void a()
		{
			cout<<"a"<<endl;
		}
		virtual void c()
		{
			cout<<"c"<<endl;
		}
};
class deri:public base
{
	public:
		virtual void b()
		{
			cout<<"b"<<endl;
		}
		virtual void c()
		{
			cout<<"c"<<endl;
	    }
};

int main()
{
	base *p=new deri;
    p->a();
	p->c();
	
	((        deri*)p)->b();	
}
