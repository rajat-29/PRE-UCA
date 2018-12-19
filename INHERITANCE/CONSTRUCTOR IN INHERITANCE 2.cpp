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
			cout<<a<<" "<<b<<endl;
		}
};

class derive:public base
{
	int c;
	public:
		derive(int x)
		{
		c=x;
		}
		void put()
		{
			cout<<c;
		}
};

int main()

{
   derive ob(4);
   ob.base::put();
   ob.put();

return 0;

}
