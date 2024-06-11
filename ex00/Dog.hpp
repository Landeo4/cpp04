#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
	public:
	Dog();
	Dog(const Dog &nb);
	Dog &operator=(const Dog &a);
	~Dog();
	virtual const std::string getType();
	virtual void setType(std::string type);
	virtual void makeSound();
	private:
};

#endif