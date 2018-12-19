#include <iostream> 
#include <set> 
#include <iterator>

using namespace std;

int main()
{
	set<int> s;
	set<int>:: iterator itr;
	
	s.insert(10);
	s.insert(50);
	s.insert(20);
	s.insert(30);
	s.insert(40);
	
	for(itr=s.begin();itr!=s.end();++itr)
	{
		cout<<*itr<<endl;
	}
	
	cout<<"SIZES : "<<endl;
	cout<<s.size()<<endl;
	cout<<s.max_size()<<endl;
	cout<<s.empty()<<endl;
	
	s.erase(30);
	
	cout<<"AFTER ERASING A ELEMENT 30"<<endl;
	
		for(itr=s.begin();itr!=s.end();++itr)
	{
		cout<<*itr<<endl;
	}
	
	s.insert(30);
	
	itr=s.find(30);
	
	cout<<"FINDi = "<<*itr;
	cout<<"COUNT = "<<s.count(30);
	
}
