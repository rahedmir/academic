//a program to find the largest number using ternary operator.

#include <iostream>

using namespace std;

int main()
{
	float x,y,z;
	
	cout<<"Enter two numbers "<<endl;
	cin>>x>>y;
	
	z=(x>y)?x:y;
	
	cout<<"Largest number is "<<z<<endl;
	
	return 0;
}
