#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{

	int usage;
	int unpaid;

	cout << "MONTHLY WATER BILL CALCULATOR" << endl;
	cout << "Please Input your water consumption in gallons and the amount of your unpaid balance in Pesos." << endl;
	cout << "" << endl;
	cout << "Water Consumption:    "; cin >> usage;
	cout << "Unpaid Balance:       "; cin >> unpaid;
    cout << " " << endl;

	if (unpaid > 0)
	     cout << "Your monthly water bill is " << 55 + (1.10*usage) << "php.";

	else
		 cout << "Your monthly water bill is " << 35 + (1.10*usage) << "php.";

_getch ();
return 0;
}





