#include<iostream>
using namespace std;

template<class T>
/*template<class T1,class T2>

class abc
{
	T1 a;
	T2 b;
	public:
	
		abc()
		{
			cin>>a>>b;
		}
		void print();
		
};
template<class T1,class T2>*/
void print(T a)
{
static int c=0;
	c++;
	cout<<a<<" "<<c<<endl;
}
int main()
{
	print(1.1f);
	print(2.2f);
	print(1);
	print(2);
}
