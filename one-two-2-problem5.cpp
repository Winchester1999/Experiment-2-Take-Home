#include <iostream>
#include <conio.h>

 using namespace std;

 int main()
 {
	 
	 int fn1 = 0; 
	 int fn2 = 1;
         int fn3 = 1;

	 cout << "FIBONACCI NUMBERS:" << endl;

	 while (fn1 + fn2 < 10947)
	 {
		 fn3 = fn1 + fn2;
		 fn1 = fn2;
		 fn2 = fn3;
		 cout << fn3 << ",";
	 }

 getch ();
 return 0;
 }


