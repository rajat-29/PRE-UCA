#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int choice;
	string st1,st2,cat;
	cout<<"ENTER CHOICE : ";
	cin>>choice;
	map<string,vector<string> > map1;
	map<string,vector<string> >::iterator it;
	vector <string> v1;
	for(int i=0;i<choice;i++)
	{
		cout<<"ENTER CATEGORY = ";
		cin>>st1;
		cout<<"ENTER VALUE = ";
		cin>>st2;
		it = map1.find(st1);
		if(it!=map1.end())
		{
			(it->second).push_back(st2);
		}
		else
		{
			vector<string> v2;
			v1.push_back(st1);
			map1.insert(pair< string,vector<string> >(st2,v2));
		}
		
	}
	cout<<"ENTER U WANT TO SEARCH = ";
	cin>>cat;

	it = find(cat);
	if(it!= map1.end())
	{
		vector <string> v3;
		
		v3.push_back()
	}
}
