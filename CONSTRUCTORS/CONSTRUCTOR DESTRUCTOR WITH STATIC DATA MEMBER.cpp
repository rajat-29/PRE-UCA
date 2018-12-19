#include<iostream>
using namespace std;

class player
{
	static int n;
	public:
		player()
		{
			n++;
		}
		~player()
		{
			n--;
		}
		static void put()
		{
			cout<<n<<endl;
		}
};
int player :: n;
void fun()
{
	player ob;
	player :: put();
}

int main()
{
	fun();
	player ob1,ob2;
	player::put();
	fun();
	player ob3;
	player::put();
}
