//a program to check a triangle valid or not.

#include <iostream>

using namespace std;

int main()
{
	float a,b,c;
	
	cout<<"Enter three sides of triangle "<<endl;
	cin>>a>>b>>c;
	
	if(a<b+c && b<c+a && c<a+b)
	{
		if(a==b && b==c && c==a)
		{
			cout<<"This triangle is Equilateral "<<endl;
		}
		else if(a==b || b==c || c==a)
		{
			cout<<"This triangle is Isosceles "<<endl;
		}
		else
		{
			cout<<"This triangle is Scalene "<<endl;
		}
	}
	else
	{
		cout<<"Invalid triangle "<<endl;
	}
	
	return 0;
}

