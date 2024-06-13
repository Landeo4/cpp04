#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <new>

int main()
{
	std::cout << "===Setup the experience===" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* q = new WrongCat();
	// (void)i;
	// (void)j;
	// (void)meta;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << q->getType() << " " << std::endl;
	std::cout << "===Now the Animals sonds===" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	q->makeSound();

	std::cout << "===Now free the Animals===" << std::endl;
	delete  i;
	delete  j;
	delete  q;
	delete  meta;
	return 0;
}
