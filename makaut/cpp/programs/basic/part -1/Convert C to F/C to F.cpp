//a program to convert the temprature from C to F.

//formula (C/5) = (F-32)/9

#include <iostream>

using namespace std;

int main()
{
	float c,f;
	
	cout<<"Enter temprature into celsius "<<endl;
	cin>>c;
	
	f = (9*c+160)/5;
	
	cout<<c<<" degree celsius = "<<f<<" degree fahrenheit"<<endl;
	
	return 0;
}
