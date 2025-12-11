#include "Dog.hpp"

Dog::Dog() : brain(new Brain())
{
	this->type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	brain = new Brain(*other.brain); // deep copy
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment operator" << std::endl;
	if (this != &other)
	{
		this->type = other.getType();
		*brain = *other.brain;
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Haf Haf" << std::endl;
}

const Brain *Dog::getBrain() const
{
	return brain;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}