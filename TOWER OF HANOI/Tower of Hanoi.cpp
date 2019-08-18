#include<iostream>

using namespace std;

void tower(int n,char a,char b, char c)
{
	if(n==1)
	{
	cout<<"Move 1st disk from "<<a<<" to "<<c<<endl;
	return;
    }
  tower(n-1,a,c,b);
  cout<<"Move "<<n-1<<" disk from "<<a<<" to "<<c<<endl;
  tower(n-1,b,a,c);	
}
int main()
{
	tower(4,'a','b','c');
	return 0;
}

