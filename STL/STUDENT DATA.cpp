#include<iostream>
#include<vector>
#include<string>
using namespace std;

class student
{
	protected:
		string name;
		int roll;
		string sub;
	public:
	void getdata()
	{
		cout<<"ENTER ROLL NO = ";
		cin>>roll;
		cout<<"ENTER NAME OF STUDENT = ";
		cin>>name;
		cout<<"ENTER SUBJECT = ";
		cin>>sub;
	}
	void putdata()
	{
		cout<<"NAME OF THE STUDENT IS = "<<name<<endl;
		cout<<"ROLL NO OF STUDENT IS = "<<roll<<endl;
		cout<<"SUBJECT = "<<sub<<endl;
	}	
};

int main()
{
	vector<student> a(10);
	int choice,i=0;
	int b,c;
	cout<<"PRESS 1 TO STORE STUDENT DATA"<<endl;
	cout<<"PRESS 2 TO DELETE STDENT DATA"<<endl;
	cout<<"PRESS 3 TO DISPLAY STUDENT DATA"<<endl;
	cout<<"PRESS 4 TO QIUT"<<endl;

	while(1)
	{
			cout<<"ENTER CHOICE : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				a[i].getdata();
				i++;
				break;
				
			case 2:
				cout<<"ENTER POSITION OF STUDENT TO DELETE : ";
				cin>>b;
				a.erase(a.begin()+b);
				break;
			case 3:
				cout<<"ENTER POSITION OF STUDENT TO DISPLAY : ";
				cin>>c;
				a[c].putdata();
				break;
				
			case 4:
			{
				break;
		    }
		}
	}
	
}

