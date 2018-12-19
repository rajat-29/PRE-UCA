#include <iostream>
#include<string.h>
using namespace std;

class base
{
	int a,b;
	public:
		base()
		{
		cout<<"BASE";
		cin>>a>>b;
		}
		void put()
		{
			cout<<a<<" "<<b;
		}
};

class derive:public base
{
	int c;
	public:
		derive()
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
   derive ob;
   ob.base::put();
   ob.put();

return 0;

}
