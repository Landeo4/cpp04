#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat's Constructor called" << std::endl;
	setType("WrongCat");
}

WrongCat:: WrongCat(const WrongCat &nb)
{
	*this = nb;
}

WrongCat &WrongCat::operator=(const WrongCat &a)
{
	if (this != &a)
	{
		this->_type = a._type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat's destructor called" << std::endl;
}

std::string WrongCat::getType() const
{
	return this->_type;
} 

void WrongCat::setType(std::string type)
{
	this->_type = type;
}

void WrongCat::makeSound() const
{
	std::cout << "intensive Meowing" << std::endl;
}
