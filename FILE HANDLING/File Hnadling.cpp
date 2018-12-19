#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ofstream ofile;
	ofile.open("sample.txt");
	string str;
	int roll,n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>str;
		ofile<<str<<endl;
		cin>>roll;
		ofile<<roll;
	}
	ofile.close();
	ifstream ifile;
	ifile.open("sample.txt");
	for(int i=0;i<n;i++)
	{
		ifile>>str;
		cout<<str<<" ";
		ifile>>roll;
		cout<<roll<<" ";
	}
	ifile.close();
}
