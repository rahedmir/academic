//a program to calculate area & perimeter of a rectangle.

#include <iostream>

using namespace std;

int main()
{
	float l,b,a=0,p=0;
	
	cout<<"Enter the value of length "<<endl;
	cin>>l;
	
	cout<<"Enter the value of breadth "<<endl;
	cin>>b;
	
	a=(l*b);
	p=2*(l+b);
	
	cout<<"Calculated area is "<<a<<" and perimeter is "<<p<<endl;
	
	return 0;
}
