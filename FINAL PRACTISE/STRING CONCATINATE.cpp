#include<iostream>
#include<string.h>
using namespace std;

class mat
{
	private:
		int a[20][20];
		int m,n;
		
	public:
		mat()
		{
			m=2;
			n=2;
		}
		void read()
		{
			for(int i=0;i<m;i++)
			{
				for(int j=0;j<n;j++)
				{
					cin>>a[i][j];
				}
			}
			
		}
		mat operator +(mat& b)
		{
			mat b1;
			for(int i=0;i<m;i++)
			{
				for(int j=0;j<n;j++)
				{
					b1.a[i][j]=a[i][j]+b.a[i][j];
				}
			}
			return b1;
			
		}
		void display()
		{
			for(int i=0;i<m;i++)
			{
				for(int j=0;j<n;j++)
				{
					cout<<a[i][j]<<" ";
				}
			}
		}
		
};

int main()
{
	mat ob1,ob2,ob3;
	ob1.read();
	ob2.read();
	ob3=ob1+ob2;
	ob3.display();
	return 0;
}
