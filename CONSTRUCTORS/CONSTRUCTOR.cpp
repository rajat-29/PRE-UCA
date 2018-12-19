#include<iostream>
#include<string.h>

using namespace std;

class string1
{
	int len;
	char *name;
	public:
		string1()
		{
			len=0;
			name=new char;   // contain null character contain 1 byte
		}
		string1(char *s)
		{
			len=strlen(s);
			name=new char[len+1];
			strcpy(name,s);
		}
		
		void join(string1 &a,string1 &b)
		{
			len=a.len+b.len;
			delete name;  // deletion is done becoz earlier 1 byte was located to the name
			name=new char[len+1];
			strcpy(name,a.name);
			strcat(name,b.name);
		}
		
		void put()
		{
			cout<<name;
		}
		
		~string1()
		{
			delete name;
		}
};

int main()
{
	char *h="HELLO";  //2 WAY  char *h=(char*)"Hello;
	string1 a(h);
	string1 b("BYE");   //2 WAY string1 b ((char*)"Bye);
	string1 c;
	c.join(a,b);
	c.put();
}
