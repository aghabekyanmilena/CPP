#pragma once

#include <iostream>

class Fixed
{
private:
	int fixedValue;
	static const int fraction = 8;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed();

	void setRawBits(int const raw);
	int getRawBits(void) const;

	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
