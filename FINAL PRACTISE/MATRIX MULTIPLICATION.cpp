#include<iostream>
using namespace std;

int main()
{
	int r1,c1,r2,c2;
	
	cout<<"ENTER R1 = ";
	cin>>r1;
	cout<<"ENTER C1 = ";
	cin>>c1;
	
	int a[r1][c1];
	
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cin>>a[i][j];
		}
	}
	
	cout<<"ENTER R2 = ";
	cin>>r2;
	cout<<"ENTER C2 = ";
	cin>>c2;
	
	int b[r2][c2];
	
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			cin>>b[i][j];
		}
	}
	
	int mul[r1][c2];
	
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			mul[i][j]=0;
		}
	}
	
	
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			for(int k=0;k<c1;k++)
			{
				mul[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			cout<<mul[i][j]<<" ";
			if(j==c2-1)
			cout<<endl;
		}
	}
	
}
