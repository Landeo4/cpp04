#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog's Constructor called" << std::endl;
	setType("Dog");
}

Dog:: Dog(const Dog &nb)
{
	*this = nb;
}

Dog &Dog::operator=(const Dog &a)
{
	if (this != &a)
	{
		this->_type = a._type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog's destructor called" << std::endl;
}

std::string Dog::getType() const
{
	return this->_type;
} 

void Dog::setType(std::string type)
{
	this->_type = type;
}

void Dog::makeSound() const
{
	std::cout << "intensive barking" << std::endl;
}
