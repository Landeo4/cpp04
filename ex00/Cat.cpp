#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat's Constructor called" << std::endl;
	setType("Cat");
}

Cat:: Cat(const Cat &nb)
{
	*this = nb;
}

Cat &Cat::operator=(const Cat &a)
{
	if (this != &a)
	{
		this->_type = a._type;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat's destructor called" << std::endl;
}

const std::string Cat::getType()
{
	return this->_type;
} 

void Cat::setType(std::string type)
{
	this->_type = type;
}

const void makeSound()
{
	std::cout << "intensive Meowing" << std::endl;
}
