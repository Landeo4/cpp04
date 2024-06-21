#include "Ice.hpp"

Ice::Ice(): AMateria
{
	std::cout << "Ice created" << std::endl;
	
}

Ice:: Ice(const Ice & a)
{
	*this = a;
}

Ice &Ice::operator=(const Ice &a)
{
	(void)a;
	return *this;
}

Ice::~Ice()
{

}

AMateria* Ice::clone() const
{
	Ice *cur = new Ice;
	return (cur);
}
