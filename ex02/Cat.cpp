#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat's Constructor called" << std::endl;
	this->_bn = new Brain();
	setType("Cat");
}

Cat:: Cat(const Cat &copy)
{
	this->_bn = new Brain();
	*this = copy;
}

Cat &Cat::operator=(const Cat &a)
{
	delete this->_bn;
	if (this != &a)
	{
		this->_type = a._type;
		this->_bn = new Brain();
		*this->_bn = *a._bn;
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

std::string Cat::getIdea(int id)
{
	// trouver comment utiliser le nb d'idee
	return this->_bn->ideas[id];
}

void Cat::SetIdea(int id, std::string idea)
{
	this->_bn->ideas[id] = idea;
}

void Cat::makeSound() const
{
	std::cout << "intensive Meowing" << std::endl;
}
