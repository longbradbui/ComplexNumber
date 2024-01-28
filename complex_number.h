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
    double magnitude() const;
    friend ostream &operator<<(ostream &ostream, const ComplexNumber &rhs);
    friend istream &operator>>(istream &istream, ComplexNumber &rhs);
    ComplexNumber &operator+=(ComplexNumber const &rhs);
    ComplexNumber &operator-=(ComplexNumber const &rhs);
    ComplexNumber &operator*=(ComplexNumber const &rhs);
    ComplexNumber &operator/=(ComplexNumber const &rhs);
    ComplexNumber operator+(const ComplexNumber &rhs) const;
    ComplexNumber operator-(const ComplexNumber &rhs) const;
    ComplexNumber operator*(const ComplexNumber &rhs) const;
    ComplexNumber operator/(const ComplexNumber &rhs) const;
    bool operator<(const ComplexNumber &rhs) const;
    bool operator>(const ComplexNumber &rhs) const;
    bool operator<=(const ComplexNumber &rhs) const;
    bool operator>=(const ComplexNumber &rhs) const;
    bool operator==(const ComplexNumber &rhs) const;
    bool operator!=(const ComplexNumber &rhs) const;

private:
    double real_;
    double imaginary_;
    double magnitude_;
};
#endif
