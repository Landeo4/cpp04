#include "AMateria.hpp"
#include "Ice.hpp"

Ice::Ice() : AMateria("Ice")
{
	std::cout << "Ice created" << std::endl;
}

Ice:: Ice(const Ice & a) : AMateria("Ice")
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
