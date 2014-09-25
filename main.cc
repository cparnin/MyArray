/********************************************************************
  Authors:       Chad Parnin & Dana Vrajitoru, IUSB, CS
  Class:         C243, Fall 2014
  File name:     main.cc
  Last updated:  September 3, 2014.
  Description:   Testing the class MyArray.
*********************************************************************/

#include "MyArray.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// main function
int main(int argc, char *argv[])
{
	srand(time(NULL)); // seed RNG

    // create an object with user specific size
	MyArray a;
    a.input();
    cout << a << endl;

    // create random array object
    cout << "Size of new random array? ";
	int randSize1 = 0;
	cin >> randSize1;
	cout << endl;
	MyArray b;
	b.randomize(10, randSize1);
    cout << b << endl;

	// test a & b for equality
	if (a != b)
		cout << "Arrays 1 & 2 are NOT equal.\n\n";
	else
		cout << "Arrays 1 & 2 are equal\n\n";
	
	/*if (a == b)
		cout << "Arrays 1 & 2 are equal.\n\n";
	else if (a != b)
		cout << "Arrays 1 & 2 are NOT equal.\n\n";*/

	// create second random array object
	cout << "Size of second random array? ";
	int randSize2 = 0;
	cin >> randSize2;
	cout << endl;
	MyArray c;
	c.randomize(10, randSize2);
	cout << c << endl;

	// compute hamming distance of b & c
	int hamming = b.hamming(c);
	cout << "The Hamming Distance between the 2nd and 3rd array is " << hamming << endl << endl;
	
    // testing the access to an index outside of the array range
    //cout << a[15] << endl;
    
    return 0;
} // main()

/*************** Example of the execution ***************************
Size of array? -> 3

Enter each element of the array:
1
2
3
The array of size 3 contains the elements:
1 2 3

Size of new random array? 9

The array of size 9 contains the elements:
2 8 4 4 0 5 2 8 8

Arrays 1 & 2 are NOT equal.

Size of second random array? 10.

The array of size 10 contains the elements:
8 4 0 8 5 0 2 3 0 1

The Hamming Distance between the 2nd and 3rd array is 9

Press any key to continue . . .
*********************************************************************/