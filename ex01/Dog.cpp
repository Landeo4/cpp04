#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog's Constructor called" << std::endl;
	this->_bn = new Brain();
	setType("Dog");
}

Dog:: Dog(const Dog &nb)
{
	*this = nb;
}

Dog &Dog::operator=(const Dog &a)
{
	Dog* bv = new Dog();
	delete this;
	bv->_bn = a._bn;
	return *bv;
}

Dog::~Dog()
{
	std::cout << "Dog's destructor called" << std::endl;
	delete this->_bn;
}

std::string Dog::getType() const
{
	return this->_type;
} 

void Dog::setType(std::string type)
{
	this->_type = type;
}

std::string Dog::getIdea(int id)
{
	return this->_bn->ideas[id];
}

void Dog::SetIdea(int id, std::string idea)
{
	this->_bn->ideas[id] = idea;
}

void Dog::makeSound() const
{
	std::cout << "intensive barking" << std::endl;
}
