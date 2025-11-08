#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	fixedValue = value << fraction;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	fixedValue = roundf(value * (1 << fraction));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy cinstructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->fixedValue = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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