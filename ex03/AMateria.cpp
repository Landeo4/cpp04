#include "AMateria.hpp"

AMateria::AMateria()
{
	AMateria *bag = new AMateria[4];
	this->_bag = bag;
}

AMateria::AMateria(const AMateria &a)
{
	*this = a;
}

AMateria &AMateria::operator=(const AMateria &a)
{
	this->_bag = a._bag;
	this->_type = a._type;
	return *this;
}

AMateria::~AMateria()
{

}

std::string const & AMateria::getType() const
{
	return this->_type;
}

void AMateria::learnMateria(AMateria* obj)
{
	int i = 0;
	while (this->_bag[i])
		i++;
	this->_bag[i] = obj;
}

AMateria* AMateria::createMateria(std::string const & type)
{
	if (type.compare("ice"))
	{
		Ice *ice = new Ice;
		return (ice);
	}
	else if (type.compare("cure"))
	{
		Cure *cure = new Cure;
		return cure;
	}
	return (NULL);
}
