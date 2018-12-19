#include<iostream>
#include<string.h>
using namespace std;

class dist
{
	private:
		int feet,inches;
		
	public:
		mat()
		{
			feet=0;
			inches=0;
		}
		void read()
		{
			cout<<"enter feet = ";
			cin>>feet;
			cout<<"enter inches = ";
			cin>>inches;
			
		}
		dist operator +(dist& b)
		{
			dist b1;
			b1.feet=feet+b.feet;
			b1.inches=inches+b.inches;
			return b1;			
		}
		dist operator -(dist& b)
		{
			dist b1;
			b1.feet=feet-b.feet;
			b1.inches=inches-b.inches;
			return b1;			
		}
		void display()
		{
			if(inches>12)
			{
				inches=inches-12;
				feet++;
			}
			cout<<feet<<"feet"<<" "<<inches<<"inches"<<endl;
		}
		
};

int main()
{
	dist ob1,ob2,ob3,ob4;
	ob1.read();
	ob2.read();
	ob3=ob1+ob2;
	ob4=ob1-ob2;
	ob3.display();
	ob4.display();
	return 0;
}
