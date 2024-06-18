#include "AMateria.hpp"

AMateria::AMateria()
{

}

AMateria::AMateria(const AMateria &a)
{
	*this = a;
}

AMateria &AMateria::operator=(const AMateria &a)
{
	if (this != &a)
	{
		this->_type = a._type;
	}
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
	this->_learnedMateria = obj;
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
