#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "=== Polymorphism Animal ===\n";

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;

	i->makeSound();  // Cat sound
	j->makeSound();  // Dog sound
	meta->makeSound(); // Animal sound

	delete meta;
	delete j;
	delete i;

	std::cout << "\n=== Polymorphism WrongAnimal===\n";

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat  = new WrongCat();

	std::cout << wrongMeta->getType() << std::endl;
	std::cout << wrongCat->getType() << std::endl;

	wrongCat->makeSound();
	wrongMeta->makeSound();

	delete wrongMeta;
	delete wrongCat;

	// std::cout << "\n=== Extra Tests ===\n";

	// std::cout << "\n=== Dog Tests ===\n";

	// Dog d1;
	// Dog d2 = d1;
	// d2 = d1;

	// std::cout << "\n=== Cat Tests ===\n";

	// Cat c1;
	// Cat c2(c1);
	// c2 = c1;

	return 0;
}
