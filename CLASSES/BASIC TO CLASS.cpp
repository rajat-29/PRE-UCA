#include<iostream>
#include<string.h>

using namespace std;

class time1
{
	int h,m,s;
	public:
		time1()
		{      // default constructor
		}
		time1 (int sec)
		{
			s=sec%60;
			int t=sec/60;
			h=t/60;
			m=t%60;
		}
	void put()
	{
		cout<<h<<" "<<m<<" "<<s;
	}
};

int main()
{
	int sec;
	cin>>sec;
	time1 t=sec;   // we called it using default constructor
	t.put();
}
