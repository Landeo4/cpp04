#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat's Constructor called" << std::endl;
	this->_bn = new Brain();
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
		this->_bn = a._bn;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat's destructor called" << std::endl;
	delete this->_bn;
}

std::string Cat::getType() const
{
	return this->_type;
} 

void Cat::setType(std::string type)
{
	this->_type = type;
}

void Cat::makeSound() const
{
	std::cout << "intensive Meowing" << std::endl;
}
