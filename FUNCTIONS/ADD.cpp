#include<iostream>
using namespace std;

int add(int,int);
float add(float,float);

int main()
{
	int a=5,b=10;
	float x=6.2,y=9.8;
	
	cout<<add(a,b)<<endl;
	cout<<add(x,y);
	
	return 0;
}

int add(int x,int y)
{
	return x+y;
}

float add(float x,float y)
{
	return x+y;
}
