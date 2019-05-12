#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main ()
{
	int count;
	cout << "Counting...";
	for(count=1; count <=10; count++)
	{
		cout << count << ",";
	}
	for(count > 10; count <=30; count++)
	{
		if (count % 2 == 0)
		cout << count << ",";
	}
cout << endl;

_getch();
return 0;
}

