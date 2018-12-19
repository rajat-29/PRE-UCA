#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int j=6;
	vector<int> v1,v2;

	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	
	cout<<endl;
	
	for(int i=0;i<5;i++)
	{
		v2.insert(v2.begin()+i,j);
		j++;
	}
	
	for(int i=0;i<v2.size();i++)
	{
		cout<<v2[i]<<" ";
	}
	
	v1.pop_back();
	
	cout<<endl;
	
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}




}
