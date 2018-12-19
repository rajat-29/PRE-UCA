#include <iostream>
#include<string.h>
using namespace std;

class base
{
	int a,b;
	public:
		base(int x,int y)
		{
			cout<<"BASE";
		   a=x;
		   b=y;
		}
		void put()
		{
			cout<<a<<" "<<b<<endl;
		}
};

class derive:public base
{
	int c;
	public:
		derive(int x,int y):base(x,y)
		{
			cout<<"DERIVE";
		cin>>c;
		}
		void put()
		{
			cout<<c;
		}
};

int main()

{
   derive ob(4,9);
   ob.base::put();
   ob.put();

return 0;

}
