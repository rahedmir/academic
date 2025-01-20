//a program to check a number positive or negative.

#include <iostream>

using namespace std;

int main()
{
	int x;
	
	cout<<"Enter a number "<<endl;
	cin>>x;
	
	if(x>0)
	{
		cout<<x<<" is a positive number"<<endl;
	}
	else if(x<0)
	{
		cout<<x<<" is a negative number"<<endl;
	}
	else
	{
		cout<<x<<" is neither positive nor a negative number"<<endl;
	}

    return 0;	
} 
