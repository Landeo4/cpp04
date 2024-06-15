#include "Animal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal's constructor called" << std::endl;
}

AAnimal:: AAnimal(const AAnimal &nb)
{
	*this = nb;
}

AAnimal &AAnimal::operator=(const AAnimal &a)
{
	if (this != &a)
	{
		this->_type = a._type;
	}
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal's destructor called" << std::endl;
}

void AAnimal::makeSound() const
{
	
}

void AAnimal::setType(std::string type)
{
	this->_type = type;
}

std::string AAnimal::getType() const
{
	return this->_type;
}
