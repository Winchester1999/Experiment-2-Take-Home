#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
#include <cstdlib>


using namespace std;

int main ()
{

	int x;
	int y;
	const double z= 2.5;
	double V;

cout << "Please input two integers x and y." << endl;
cout << "x:"; cin >> x;
cout << "y:"; cin >> y;

switch (x)
{

	case 1: 
		if ( y >=5 )
	{
		std :: cout << std :: fixed;
		std :: cout << std :: setprecision(2);
		cout << setw (10);
		cout << "V = " <<  (x + (y/z));
	}

		else 
	{
		std :: cout << std :: fixed;
		std :: cout << std :: setprecision(2);
		cout << setw (10);
		cout << "V = " << (x*y*z); 
	}

break;	

	case 2:
		if ( y <= 5)
	{ 
		std :: cout << std :: fixed;
		std :: cout << std :: setprecision(2);
		cout << setw (10);
		cout << "V = " << abs((x-y)/z);
	}

		else 
	{
		std :: cout << std :: fixed;
		std :: cout << std :: setprecision(2);
		cout << setw (10);
		cout << "V =  " << (x- sqrt( y + z));
	}
break;

default:
	std :: cout << std :: fixed;
	std :: cout << std :: setprecision(2);
	cout << setw (10);
	cout << "V = " << (x + z + y);


}



_getch ();
return 0;
}





