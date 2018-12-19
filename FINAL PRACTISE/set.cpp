#include<iostream>
#include<set>

using namespace std;

int main()
{
	set<int> s1;
	
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	s1.insert(50);
	s1.insert(20);
	
	set<int>::iterator itr;
	
	for(itr=s1.begin();itr!=s1.end();itr++)
	{
		cout<<*itr<<" ";
	}
	
	cout<<endl;
	
	s1.erase(50);
	
	for(itr=s1.begin();itr!=s1.end();itr++)
	{
		cout<<*itr<<" ";
	}
	
	itr=s1.find(100);
	
	if(*itr==1)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
}
