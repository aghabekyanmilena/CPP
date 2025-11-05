#pragma once

#include <iostream>

class Fixed
{
private:
	int value;
	static const int fraction;
public:
	Fixed(); //default constructer
	Fixed(const Fixed &other); // copy constructer
	Fixed &operator=(const Fixed &other); // copy assignment operator
	~Fixed(); // destructor

	void setRawBits(int const raw);
	int getRawBits(void) const;
};