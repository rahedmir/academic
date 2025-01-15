//a program to swap the value of 2 variables using 3rd variable.

#include <iostream>

using namespace std;

int main()
{
	int x,y,temp;
	
	cout<<"Enter two numbers "<<endl;
	cin>>x>>y;
	
	cout<<"Before swapping"<<endl;
	cout<<"X = "<<x<<" Y = "<<y<<endl;
	
	cout<<"After swapping"<<endl;
	
	temp=x;
	x=y;
	y=temp;
	
	cout<<"X = "<<x<<" Y = "<<y<<endl;
	
	return 0;
}
