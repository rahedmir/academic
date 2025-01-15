//a program to calculate simple interests.

#include <iostream>

using namespace std;

int main()
{
	float p,r,si; 
	int t;
	
	cout<<"Enter principle "<<endl;
	cin>>p;
	
	cout<<"Enter time (in year)"<<endl;
	cin>>t;
	
	cout<<"Enter interest rate "<<endl;
	cin>>r;
	
	si=(p*r*t)/100;
	
	cout<<"Calculated interest is RS/- "<<si<<endl;
	
	return 0;
}
