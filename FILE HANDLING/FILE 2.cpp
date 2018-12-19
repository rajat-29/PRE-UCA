#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
	ofstream ofile;
	ofile.open("sample1.txt");
	ifstream ifile;
	ifile.open("sample.txt");
	char ch;
	while((ch=ifile.get())!=EOF)
	{
		ofile.put(ch);
	}
	ofile.close();
	ifile.close();
}
