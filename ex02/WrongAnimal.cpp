#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal's constructor called" << std::endl;
}

WrongAnimal:: WrongAnimal(const WrongAnimal &nb)
{
	*this = nb;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &a)
{
	if (this != &a)
	{
		this->_type = a._type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal's destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal sound" << std::endl;
}

void WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

std::string WrongAnimal::getType() const
{
	return this->_type;
}
