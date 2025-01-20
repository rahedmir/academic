//a program to toggle a character.

#include <iostream>

using namespace std;

int main()
{
	char ch;
	int num; 
	
	cout<<"Enter a character "<<endl;
	cin>>ch;
	
	num=(int)ch;
	
	cout<<"Before toggle "<<ch<<endl;
	
	if(num>=97)
	{
		cout<<"After toggle "<<char(num-32)<<endl;
	}
	else if (num>=65)
	{
		cout<<"After toggle "<<char(num+32)<<endl;
	}
	else
	{
		cout<<"Bad Character!!"<<endl;
	}
	
	return 0;
}
