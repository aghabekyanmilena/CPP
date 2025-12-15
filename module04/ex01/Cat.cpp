#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain())
{
	// this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	brain = new Brain(*other.brain); // deep copy
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment operator" << std::endl;
	if (this != &other)
	{
		this->type = other.getType();
		delete brain;
		brain = new Brain(*other.brain);
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}

const Brain *Cat::getBrain() const
{
	return brain;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}