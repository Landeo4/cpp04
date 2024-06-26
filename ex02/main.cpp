#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <new>
#include "Brain.hpp"

int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	const AAnimal* u[10];

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
		std::cout << "=== voici l'index === " << i << std::endl;
		delete u[i];
	}
	delete j;
	delete i;

	return 0;
}
