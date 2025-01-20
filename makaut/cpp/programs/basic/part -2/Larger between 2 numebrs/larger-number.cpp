//a program to find a larger number between two numbers.

#include <iostream>

using namespace std;

int main()
{
	int x,y;
	
	cout<<"Enter two numbers "<<endl;
	cin>>x>>y;
	
	if(x>y)
	{
		cout<<x<<" is greter then "<<y<<endl;
	}
	else if (y>x)
	{
		cout<<y<<" is greter then "<<x<<endl;
	}
	else if (x==y)
	{
		cout<<"Both numbers are equal"<<endl;
	}
	
	return 0;
}
