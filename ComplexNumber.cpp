// ComplexNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "complex_number.h"
using namespace std;
int main()
{
	ComplexNumber c1(10.5, 5.10);
	ComplexNumber c2(-9.9, -8.8);
	ComplexNumber c3 = c1 * c2;
	cout << c1 << endl;
	cout << c2 << endl;
	cout << c3 << endl;
}

