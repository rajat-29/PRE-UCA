#include<iostream>
using namespace std;

class matrix
{
	int **p,m,n;
	public:
		matrix()
		{
			cin>>m>>n;
			p=new int*[m];
			for(int i=0;i<m;i++)
			{
				p[i]=new int[n];
			}
		}
		operator int()
		{
			int sum=0,i,j;
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					sum=sum+p[i][j];
				}
			}
			return sum;
		}
		void operator=(int count)
		{
			int i,j;
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					p[i][j]=p[i][j]+count;
				}
			}
		}
		friend void operator>>(istream &in,matrix &ob);
		friend void operator<<(ostream &out,matrix &ob1);
};
	void operator>>(istream &in,matrix &ob)
		{
			for(int i=0;i<ob.m;i++)
			{
				for(int j=0;j<ob.n;j++)
				{
					in>>ob.p[i][j];
				}
			}
		}
	void operator<<(ostream &out,matrix &ob1)
	    {
	    	for(int i=0;i<ob1.m;i++)
	    	{
	    		for(int j=0;j<ob1.n;j++)
	    		{
	    			out<<ob1.p[i][j]<<" ";
				}
				out<<endl;
			}
	    }
		

int main()
{
	matrix m;
	cin>>m;
	int sum=m;
	cout<<"SUM IS = "<<sum<<endl;
	int count;
	cin>>count;
	m=count;
	cout<<m;
	return 0;
}
