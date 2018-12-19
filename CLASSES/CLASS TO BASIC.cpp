#include<iostream>
#include<string.h>

using namespace std;

class time1
{
	int h,m,s;
	public:
		time1 (int x,int y,int z)
		{
			h=x;
			m=y;
			s=z;
		}
	operator int()
	{
		int t;
		t=((h*3600)+(m*60)+(s));
		return t;
	}
};

int main()
{
	int h,m,s;
	cin>>h>>m>>s;
	time1 t(h,m,s);   // we called it using default constructor
    int sec=t;
    cout<<sec;
}
