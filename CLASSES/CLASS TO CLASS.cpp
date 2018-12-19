#include<iostream>
#include<string.h>
#include<math.h>
#include<iomanip>

using namespace std;

class rectangle
{
	int length,breath;
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
		int t;
		t=(length*breath);   // calculate 
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
			area=ob.area();
		}
		float radi()
		{
			radius=(sqrt(area/3.14));
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
	float a=c.radi();
	cout<<setprecision(2)<<a;
}
