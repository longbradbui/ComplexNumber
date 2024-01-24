#include "complex_number.h"

ComplexNumber::ComplexNumber() : real_(1), imaginary_(1)
{
}

ComplexNumber::ComplexNumber(double real, double imaginary)
{
	real_ = real;
	imaginary_ = imaginary;
}

double ComplexNumber::real() const
{
	return real_;
}

double ComplexNumber::imaginary() const
{
	return imaginary_;
}

ComplexNumber ComplexNumber::operator*=(ComplexNumber const& rhs) 
{
	real_ = (this->real() * rhs.real()) - (this->imaginary() * rhs.imaginary());
	imaginary_ = (this->imaginary() * rhs.real()) + (this->real() * rhs.imaginary());
	return *this;
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& rhs) const
{
	ComplexNumber result = *this;
	result *= rhs;
	return result;
}

ostream& operator<<(ostream& ostream, const ComplexNumber& rhs)
{
	if (rhs.imaginary() < 0)
	{
		cout << rhs.real() << " - " << (rhs.imaginary()*(-1)) << "i" << endl;
	} 
	cout << rhs.real() << " + " << rhs.imaginary() << "i " << endl;
	return ostream;
}

/*
istream& operator>>(ostream& istream, ComplexNumber& rhs)
{
	return istream;
}
*/
