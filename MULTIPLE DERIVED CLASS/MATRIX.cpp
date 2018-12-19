#include<iostream>
using namespace std;

class matrix
{
	public:
		int b[3][3];
	    int c[3][3];
	    int d[3][3];	
};

int main()
{
	class matrix m;
	int a[3][3],sum=0,p=0,q=0;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>m.b[i][j];
		}
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>m.c[i][j];
		}
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>m.d[i][j];
		}
	}

	
	for(int i=q;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			sum=(sum+(m.b[q][j]*m.c[j][p]));
		}
		a[q][p]=sum;
		sum=0;
		p++;
	}
	
	q++;
	sum=0;
	p=0;
	
		for(int i=1;i<=3;i++)
	{
		for(int j=0;j<3;j++)
		{
			sum=(sum+(m.b[q][j]*m.c[j][p]));
		}
		a[q][p]=sum;
		sum=0;
		p++;
	}

	q++;
	sum=0;
	p=0;
	
		for(int i=1;i<=3;i++)
	{
		for(int j=0;j<3;j++)
		{
			sum=(sum+(m.b[q][j]*m.c[j][p]));
		}
		a[q][p]=sum;
		sum=0;
		p++;
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			a[i][j]=(a[i][j]+m.d[i][j]);
		}
	}
	
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
