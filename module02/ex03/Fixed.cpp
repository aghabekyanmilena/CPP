#include "Fixed.hpp"

// constructors and destructor
Fixed::Fixed()
{
	this->fixedValue = 0;
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	// std::cout << "Int constructor called" << std::endl;
	fixedValue = value << fraction;
}

Fixed::Fixed(const float value)
{
	// std::cout << "Float constructor called" << std::endl;
	fixedValue = roundf(value * (1 << fraction));
}

Fixed::Fixed(const Fixed &other)
{
	// std::cout << "Copy cinstructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->fixedValue = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

// member funcs
void Fixed::setRawBits(int const raw)
{
	fixedValue = raw;
}

int Fixed::getRawBits(void) const
{
	return fixedValue;
}

float Fixed::toFloat(void) const
{
	return (float)fixedValue / (1 << fraction);
}

int Fixed::toInt(void) const
{
	return fixedValue >> fraction;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

// comparison operators
bool Fixed::Fixed::operator<(const Fixed &other) const
{
	return this->fixedValue < other.fixedValue;
}

bool Fixed::operator>(const Fixed &other) const
{
	return this->fixedValue > other.fixedValue;
}

bool Fixed::operator>=(const Fixed &other) const
{
	return this->fixedValue >= other.fixedValue;
}

bool Fixed::operator<=(const Fixed &other) const
{
	return this->fixedValue <= other.fixedValue;
}

bool Fixed::operator==(const Fixed &other) const
{
	return this->fixedValue == other.fixedValue;
}

bool Fixed::operator!=(const Fixed &other) const
{
	return this->fixedValue != other.fixedValue;
}

// arithmetic operators
Fixed Fixed::operator+(const Fixed &other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{	
	return Fixed(this->toFloat() / other.toFloat());
}

// increment and decrement
Fixed &Fixed::operator++() // pre-increment (++i)
{
	this->fixedValue++;
	return *this;
}

Fixed &Fixed::operator--() // pre-decrement (--i)
{
	this->fixedValue--;
	return *this;
}

Fixed Fixed::operator++(int) // post-increment (i++)
{
	Fixed tmp = *this;
	this->fixedValue++;
	return tmp;
}

Fixed Fixed::operator--(int) // post-decrement (i--)
{
	Fixed tmp = *this;
	this->fixedValue--;
	return tmp;
}

// min and max
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return a;
	return b;
}