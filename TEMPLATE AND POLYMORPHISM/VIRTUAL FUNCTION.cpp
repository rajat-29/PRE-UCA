#include<iostream>

using namespace std;

class A
{
	public:
		A(){
		}
		A(int x)
		{
			cout<<x<<endl;
		}
		void get()
		{
			cout<<"Calling a"<<endl;
		}
};

class B:virtual public A
{
		public:
			B(){
			}
			B(int x,int y):A(x)
			{
			 cout<<y<<endl;	
			}
		void get()
		{
			cout<<"Calling b"<<endl;
		}
};

class C:public B
{
		public:
			C(){
			}
			C(int x,int y,int z):B(x,y)
			{
				cout<<z<<endl;
			}
		void get()
		{
			cout<<"Calling c"<<endl;
		}
};

class D:public C
{
		public:
			D(int x,int y,int z,int a):C(x,y,z)
			{
				cout<<a<<endl;
			}
		void get()
		{
			cout<<"Calling d"<<endl;
		}
};

int main()
{
	D ob(1,2,3,4);
	return 0;
}
