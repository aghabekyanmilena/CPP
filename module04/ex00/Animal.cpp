#include "Animal.hpp"

Animal::Animal()
{
	this->type = "";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string &type)
{
	this->type = type;
	std::cout << "Animal parameterized constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	this->type = other.type;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}

void Animal::makeSound() const
{
	std::cout << "Animal: makes sound" << std::endl;
}