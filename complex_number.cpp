#include "complex_number.h"
#include <iostream>
#include <cmath>
using namespace std;

ComplexNumber::ComplexNumber() : real_(1), imaginary_(1)
{
}

ComplexNumber::ComplexNumber(double real, double imaginary) : real_(real), imaginary_(imaginary)
{
}

double ComplexNumber::real() const
{
	return real_;
}

double ComplexNumber::imaginary() const
{
	return imaginary_;
}

double ComplexNumber::magnitude() const
{
    return sqrt(pow(real_, 2) + pow(imaginary_,2));
}

ComplexNumber &ComplexNumber::operator+=(ComplexNumber const &rhs)
{
	real_ = (this->real() + rhs.real());
	imaginary_ = (this->imaginary() + rhs.imaginary());
	return *this;
}

ComplexNumber &ComplexNumber::operator-=(ComplexNumber const &rhs)
{
	real_ = (this->real() - rhs.real());
	imaginary_ = (this->imaginary() - rhs.imaginary());
	return *this;
}

ComplexNumber &ComplexNumber::operator*=(ComplexNumber const &rhs)
{
	real_ = (this->real() * rhs.real()) - (this->imaginary() * rhs.imaginary());
	imaginary_ = (this->imaginary() * rhs.real()) + (this->real() * rhs.imaginary());
	return *this;
}

ComplexNumber &ComplexNumber::operator/=(ComplexNumber const &rhs)
{
	double denominator = (rhs.real() * rhs.real()) + (rhs.imaginary() * rhs.imaginary());
	real_ = (this->real() * rhs.real() + this->imaginary() * rhs.imaginary()) / denominator;
	imaginary_ = (this->imaginary() * rhs.real() - this->real() * rhs.imaginary()) / denominator;
	return *this;
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber &rhs) const
{
	ComplexNumber result = *this;
	result += rhs;
	return result;
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber &rhs) const
{
	ComplexNumber result = *this;
	result -= rhs;
	return result;
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber &rhs) const
{
	ComplexNumber result = *this;
	result *= rhs;
	return result;
}

ComplexNumber ComplexNumber::operator/(const ComplexNumber &rhs) const
{
	ComplexNumber result = *this;
	result /= rhs;
	return result;
}

bool ComplexNumber::operator<(const ComplexNumber &rhs) const
{
	return (this->magnitude() < rhs.magnitude());
}

bool ComplexNumber::operator>(const ComplexNumber &rhs) const
{
	return (this->magnitude() > rhs.magnitude());
}

bool ComplexNumber::operator<=(const ComplexNumber &rhs) const
{
	return (this->magnitude() <= rhs.magnitude());
}

bool ComplexNumber::operator>=(const ComplexNumber &rhs) const
{
	return (this->magnitude() >= rhs.magnitude());
}

bool ComplexNumber::operator==(const ComplexNumber &rhs) const
{
	return ((this->imaginary() == rhs.imaginary()) && (this->real() == rhs.real()));
}

bool ComplexNumber::operator!=(const ComplexNumber &rhs) const
{
	return !(*this == rhs);
}

ostream &operator<<(ostream &ostream, const ComplexNumber &rhs)
{
	if (rhs.imaginary() < 0)
	{
		cout << rhs.real() << " - " << (rhs.imaginary() * (-1)) << "i" << endl;
	}
	else
	{
		cout << rhs.real() << " + " << rhs.imaginary() << "i " << endl;
	}
	return ostream;
}

istream &operator>>(istream &istream, ComplexNumber &rhs)
{
	istream >> rhs.real_ >> rhs.imaginary_;
	return istream;
}
