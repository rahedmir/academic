//a program to display the corresponding color name (VIBGYOR).

#include <iostream>

using namespace std;

int main()
{
  char ch;
  
  cout<<"Enter a character to display the color name (V I B G Y O R) "<<endl;
  cin>>ch;
  
  switch (ch)
  {
  	case 'v':
  	case 'V': cout<<"Violet"<<endl;
  	break;
  	
  	case 'i':
  	case 'I': cout<<"Indigo"<<endl;
  	break;
  	
  	case 'b':
  	case 'B': cout<<"Blue"<<endl;
  	break;
  	
  	case 'g':
  	case 'G': cout<<"Green"<<endl;
  	break;
  	
  	case 'y':
  	case 'Y': cout<<"Yellow"<<endl;
  	break;
  	
  	case 'o':
  	case 'O': cout<<"Orange"<<endl;
  	break;
  	
  	case 'r':
  	case 'R': cout<<"Red"<<endl;
  	break;
  	
  	default: cout<<"Bad character!!"<<endl;
  }	
  
  return 0;	
} 
