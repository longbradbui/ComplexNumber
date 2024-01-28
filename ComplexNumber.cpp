#include <iostream>
#include "complex_number.h"
using namespace std;

int main()
{
	ComplexNumber c1(10.5, 5.10);
	ComplexNumber c2(-9.9, -8.8);
	ComplexNumber c3, c4, c5, c6;
	c3 = c1 + c2;
	c4 = c1 - c2;
	c5 = c1 * c2;
	c6 = c1 / c2;
	cout << c1;
	cout << c2;
	cout << c3;
	cout << c4;
	cout << c5;
	cout << c6;
	cout << "c1 < c2: " << ((c1 < c2) ? "TRUE" : "FALSE") << endl;
	cout << "c1 > c2: " << ((c1 > c2) ? "TRUE" : "FALSE") << endl;
	cout << "c1 != c2: " << ((c1 != c2) ? "TRUE" : "FALSE") << endl;
	cout << "c1 == c2: " << ((c1 == c2) ? "TRUE" : "FALSE") << endl;
}
