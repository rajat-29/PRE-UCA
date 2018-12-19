#include<iostream>
#include<cstdio>
#include<cmath>
#include<string.h>
#include<iomanip>
using namespace std;

void cq(int n)
{
	try
	{
		if(n<0)
		{
		throw -1;
	    }
	    else if(n==0)
	    {
	    	throw 0;
		}
	}
	catch(int n2)
	{
		if(n2<0)
		{
			cout<<"NEGATIVE";
		}
		else if(n2==0)
		{
			cout<<"zero";	
		}
	}
}



int main()
{
	int no;
	cout<<"ENTER A NO = ";
	cin>>no;
	cq(no);
	return 0;
}
