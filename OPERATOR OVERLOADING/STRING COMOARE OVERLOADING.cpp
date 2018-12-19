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
	    name= new char;	
	}
	string1(char *a)
	{
		len=strlen(a);
		name=new char[len+1];
		strcpy(name,a);
	}
	string1 operator+(string1 ob)
	{
		string1 t;
		t.len=len+ob.len;
		delete t.name;
		t.name=new char[t.len+1];
		strcpy(t.name,name);
		strcat(t.name,ob.name);
		return t;
	}
	int operator==(string1 ob)
	{
        if(strcmp(name,ob.name)==0)
        return 1;
        else
        return 0;
	}
	
int put()
{
	cout<<name;
}
};

int main()
{
	string1 a((char*)"Hello");
	string1 b((char*)"Bye");
	string1 c;
	c=a+b;
c.put();
if(a==b)
{
	cout<<"EQUAL";
}
else
{
	cout<<"NOT EQUAL";
}
}
