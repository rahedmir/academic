//a program to check a year leap-year or not.

#include <iostream>

using namespace std;

int main()
{
	int x;
	
	cout<<"Enter a year "<<endl;
	cin>>x;
	
	if(x%400==0)
	{
		cout<<x<<" is a leap-year"<<endl;
	}
	else if(x%100==0)
	{
		cout<<x<<" is not a leap-year"<<endl;
	}
	else if(x%4==0)
	{
		cout<<x<<" is a leap-year"<<endl;
	}
	else
	{
		cout<<x<<" is not a leap-year"<<endl;
	}
	
	return 0;
}
