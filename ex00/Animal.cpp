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