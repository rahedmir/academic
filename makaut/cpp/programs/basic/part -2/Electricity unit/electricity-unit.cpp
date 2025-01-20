//a program to calculate electricity unit consumed and the charges.

/** 

Unit Consumed                Charge/Unit
-----------------------------------------
First 200                    RS /- 5
Next  200                    RS /- 6
Next  100                    RS /- 7
Above 500                    RS /- 8

**/

#include <iostream>

using namespace std;

int main()
{
	int unit;
	float charge;
	
	cout<<"Enter consumed electricity unit "<<endl;
	cin>>unit;
	
	if(unit <=200)
	{
		charge = (unit*5);
	}
	else if(unit >200 && unit<=400)
	{
		charge = ((unit-200)*6) + (200*5);
	}
	else if(unit>400 && unit<=500)
	{
		charge = ((unit-400)*7) + (200*6) + (200*5);
	}
	else if(unit>500)
	{
		charge = ((unit-500)*8)+ (100*7) + (200*6) + (200*5);
	}
	
	cout<<"Your electricity charge is RS /- "<<charge<<endl;
	
	return 0;
}
