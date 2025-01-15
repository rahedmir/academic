//a program to calculate area of a triangle.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float a,b,c,s,area; //s => semi perimeter
	
	cout<<"Enter three sides of the triangle "<<endl;
	cin>>a>>b>>c;
	
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	
	cout<<"Calculated area of the triangle is "<<area<<endl;
	
	return 0;
}
