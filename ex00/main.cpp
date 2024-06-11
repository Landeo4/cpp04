#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <new>

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	// (void)i;
	// (void)j;
	// (void)meta;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	return 0;
}
