#include<iostream>
using namespace std;

class abc
{
	public:
		int a,b;
		abc(int x,int y)
		{
			a=x;
			b=y;
		}
		void print()
		{
			cout<<a<<" "<<b;
		}
};


int main()
{
	abc ob(2,3);
	int abc::*p=&abc::a;
    void (abc::*point)()=&abc::print;      //pointer of a function
	abc *pob;
	pob = &ob;
	ob.print();
}
