#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <new>
#include "Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* u[10];

	Dog basic;
	{
		Dog tmp = basic;
	}

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			u[i] = new Dog();
		else
			u[i] = new Cat();
	}
	for (int i = 0; i < 10; i++)
		u[i]->makeSound();
	for (int i = 0; i < 10; i++)
	{
		// std::cout << "=== voici l'index === " << i << std::endl;
		delete u[i];
	}
	delete j;//should not create a leak
	delete i;

	return 0;
}
