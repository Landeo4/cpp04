#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal's constructor called" << std::endl;
}

Animal:: Animal(const Animal &nb)
{
	*this = nb;
}

Animal &Animal::operator=(const Animal &a)
{
	if (this != &a)
	{
		this->_type = a._type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal's destructor called" << std::endl;
}

void Animal::makeSound()
{
	
}

void Animal::setType(std::string type)
{
	this->_type = type;
}

std::string Animal::getType()
{
	return this->_type;
}
