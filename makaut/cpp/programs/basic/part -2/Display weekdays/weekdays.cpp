//a program to display corresponding weekdays.

#include <iostream>

using namespace std;

int main()
{
	int day_num;
	
	cout<<"Enter day number "<<endl;
	cin>>day_num;
	
	switch (day_num)
	{
		case 1: cout<<"Sunday"<<endl;
		break;
		case 2: cout<<"Monday"<<endl;
		break;
		case 3: cout<<"Tuesday"<<endl;
		break;
		case 4: cout<<"Wednesday"<<endl;
		break;
		case 5: cout<<"Thursday"<<endl;
		break;
		case 6: cout<<"Friday"<<endl;
		break;
		case 7: cout<<"Saturday"<<endl;
		break;
		default:cout<<"Out of day number"<<endl;
	}
	
	return 0;
}
