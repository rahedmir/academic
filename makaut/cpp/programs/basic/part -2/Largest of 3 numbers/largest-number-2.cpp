//a program to find the largest of 3 numbers using nested if.

#include <iostream>

using namespace std;

int main()
{
	int x,y,z;
	
	cout<<"Enter three numbers "<<endl;
	cin>>x>>y>>z;
	
	if(x>y)
	{
		if(x>z)
		{
			cout<<x<<" is the largest number"<<endl;
		}
		else
		{
			cout<<z<<" is the largest number"<<endl;
		}
	}
	else
	{
		if(y>z)
		{
			cout<<y<<" is the largest number"<<endl;
		}
		else
		{
			cout<<z<<" is the largest number"<<endl;
		}
	}
	
	return 0;
}
