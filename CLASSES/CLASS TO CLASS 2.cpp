#include<iostream>
#include<string.h>
#include<math.h>
#include<iomanip>

using namespace std;

class rectangle
{
	int length,breath,t;
	public:
		rectangle()
		{      // default constructor
		}
		rectangle (int a)
		{
			length=a;     // one value will initilize both length and breath converting basic to class
			breath=2*a;
		}
	int area()
	{
		t=(length*breath);   // calculate 
	}
	int getarea()
	{
		return t;
	}
};

class circle
{
	int area;
	float radius;
	public:
	circle()
	{
		}	
		circle(rectangle &ob)  // initilizes
		{
			area=ob.getarea();
			radius=(sqrt(area/3.14));
		}
		operator float()
		{
			return radius;
		}
		
};
int main()
{
	int length;
	cin>>length;
	rectangle t=length;   // we called it using default constructor
	t.area();
	circle c;
	c=t;      //initilizing value of one class to another class
	float a=c;
	cout<<setprecision(2)<<a;
}
