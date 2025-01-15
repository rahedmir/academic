//a program to calculate compound interest.

//formula [ci=p*pow((1+r/100),t)-p]

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float p,r,t,ci;
	
	cout<<"Enter principle "<<endl;
	cin>>p;
	
	cout<<"Enter time (in year)"<<endl;
	cin>>t;
	
	cout<<"Enter interest rate "<<endl;
	cin>>r;
	
	ci= p*pow((1+r/100),t)-p;
	
	cout<<"Calculated interest is RS/- "<<ci<<endl;
	
	return 0;
}
