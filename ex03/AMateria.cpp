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

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
