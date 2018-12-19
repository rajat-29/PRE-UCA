#include<iostream>
using namespace std;
int add(int x,int y)
{
	return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
int mul(int x,int y)
{
	return x*y;
}
int (*point)(int,int)=add;

int main()
{
	int (*point[3])(int,int);
	point[0]=add;
	point[1]=sub;
	point[2]=mul;
    for(int i=0;i<3;i++)
    {
    	cout<<point[i](5,2)<<endl;
	}
}

