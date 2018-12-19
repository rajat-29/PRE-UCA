#include<iostream>
#include<map>

using namespace std;

int main()
{
	map<int,int> m1;
	map<int,int>::iterator itr;
	
	m1.insert(pair<int,int>(1,10));
	m1.insert(pair<int,int>(2,20));
	m1.insert(pair<int,int>(3,30));
	m1.insert(pair<int,int>(4,40));
	m1.insert(pair<int,int>(5,50));
	
	for(itr=m1.begin();itr!=m1.end();++itr)
	{
		cout<<itr->first<<" ";
		cout<<itr->second;
		cout<<endl;
	}
}
