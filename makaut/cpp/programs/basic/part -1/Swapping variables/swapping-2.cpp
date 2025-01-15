//a program to swap the value of 2 variables without using 3rd variable.

#include <iostream>

using namespace std;

int main()
{
	int x,y;
	
	cout<<"Enter two numbers "<<endl;
	cin>>x>>y;
	
	cout<<"Before swapping"<<endl;
	cout<<"X = "<<x<<" Y = "<<y<<endl;
	
	cout<<"After swapping"<<endl;
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	cout<<"X = "<<x<<" Y = "<<y<<endl;
	
	return 0;
}
