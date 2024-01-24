#ifndef COMPLEX_NUMBER_H_
#define COMPLEX_NUMBER_H_
#include <iostream>
using namespace std;

class ComplexNumber
{
public:
    ComplexNumber();
    ComplexNumber(double real, double imaginary);
    double real() const;
    double imaginary() const;
    ComplexNumber operator*=(ComplexNumber const& rhs);
    ComplexNumber operator*(const ComplexNumber& rhs) const;
    friend ostream& operator<<(ostream& ostream, const ComplexNumber& rhs);
    //friend istream& operator>>(ostream& istream, ComplexNumber& rhs);
private:
    double real_;
    double imaginary_;

};
#endif

