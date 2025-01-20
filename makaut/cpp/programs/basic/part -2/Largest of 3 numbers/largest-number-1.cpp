//a program to find the largest of 3 numbers using if-else.

#include <iostream>

using namespace std;

int main()
{
	int x,y,z;
	
	cout<<"Enter three numbers "<<endl;
	cin>>x>>y>>z;
	
    if(x>y && x>z)
    {
    	cout<<x<<" is the largest number"<<endl;
	}
	else if(y>x && y>z)
	{
		cout<<y<<" is the largest number"<<endl;
	}
	else if(z>x && z>y)
	{
		cout<<z<<" is the largest number"<<endl;
	}
	else if(x==y && y==z)
	{
		cout<<"All numbers are equal"<<endl;
	}
	
	
	return 0;
}
