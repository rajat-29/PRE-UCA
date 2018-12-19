#include <iostream> 
#include <map> 
#include <iterator>

using namespace std;

int main()
{
	map<int,int> m;
	map<int,int>::iterator itr;
	
	m.insert(pair<int,int> (1,10));
	m.insert(pair<int,int> (2,20));
	m.insert(pair<int,int> (3,30));
	m.insert(pair<int,int> (4,40));
	m.insert(pair<int,int> (5,50));
	
	for(itr=m.begin();itr!=m.end();++itr)
	{
	   cout<<itr->second<<endl;
	}
	
	cout<<"SIZE = "<<m.size()<<endl;
	cout<<"EMPTY OR NOT = "<<m.empty()<<endl;
	
	m.erase(3);
	
	for(itr=m.begin();itr!=m.end();++itr)
	{
	   cout<<itr->second<<endl;
	}
	
	m.insert(pair<int,int> (3,30));

	
	for(itr=m.begin();itr!=m.end();++itr)
	{
	   cout<<itr->second<<endl;
	}
	
	cout<<m.count(3);
}
