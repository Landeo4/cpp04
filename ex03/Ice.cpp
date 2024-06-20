#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice created" << std::endl;
}

Ice:: Ice(const Ice & a)
{
	*this = a;
}

Ice &Ice::operator=(const Ice &a)
{
	if (this != &a)
	{
		this->_type = a._type;
	}
	return *this;
}

Ice::~Ice()
{

}

AMateria* AMateria::clone() const
{
	Ice *cur = new Ice;
	return (cur);
}
