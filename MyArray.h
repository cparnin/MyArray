/********************************************************************
  Authors:       Chad Parnin & Dana Vrajitoru, IUSB, CS
  Class:         C243, Fall 2014
  File name:     MyArray.h
  Last updated:  September 3, 2014.
  Description:   Definition of a class that implements a safe array.
*********************************************************************/

#ifndef MY_ARRAY_H
#define MY_ARRAY_H

#include <iostream>
using namespace std;

class MyArray
{
protected:
    int size;
    int *array;

public:
    // Constructor with given size, can be used as default constructor.
    MyArray(int theSize = 0);

    // Destructor. If the array is not empty, it must be deallocated.
    ~MyArray();

    // Copy constructor
    MyArray(MyArray &data);

    // Assignment operator
    MyArray &operator=(MyArray &data);

    // Input elements of array
    void input();

    // Randomize elements in array
    void randomize(int limit = 100, int theSize = 0);

	// Test for equality
	bool operator==(MyArray &data);

	// Test for inequality
	bool operator!= (MyArray &data);

	// Hamming Distance
	int hamming(MyArray &data);

    // Deletes the array and sets the size to 0.
    void empty();

    // Resize the array.
    void resize(int theSize = 0);

    // Access an element of the array. If the index (subscript) is out
    // of the array, it prints an error message and exits the program.
    int &operator[](int index);

    // Returns the size of the array.
    int getSize();

    // Output the elements of the array.
    void output();

    // We define this so that we can write "cout << a;" if a is an
    // object of this class.
    friend ostream &operator<<(ostream &out, MyArray &data);
    //friend istream &operator>>(istream &in, MyArray &data);
}; // class MyArray

#endif
