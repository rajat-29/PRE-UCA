// CODE FOR FUNCTION - CALL BY VALUE //

/*

#include<iostream>
using namespace std;

void valueswap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	
	cout<<"After swapping :"<<a<<" "<<b<<endl;
}

int main()
{
	int a,b;
	
	cin>>a>>b;
	
	valueswap(a,b);
	
	cout<<"Before Swapping :"<<a<<" "<<b<<endl;
}

*/

// CODE FOR FUNCTION - CALL BY POINTER //

/*


#include<iostream>
using namespace std;

void valueswap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
	cout<<"After swapping :"<<*a<<" "<<*b<<endl;
}

int main()
{
	int a,b;
	
	cin>>a>>b;
	
	valueswap(&a,&b);
	
	cout<<"Swapping :"<<a<<" "<<b<<endl;
}

*/

// CODE FOR FUNCTION - CALL BY REFRENCE

/*

#include<iostream>
using namespace std;

void valueswap(int &x,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	
	cout<<"After swapping :"<<x<<" "<<y<<endl;
}

int main()
{
	int a,b;
	
	cin>>a>>b;
	
	valueswap(a,b);
	
	cout<<"Swapping :"<<a<<" "<<b<<endl;
}

*/
