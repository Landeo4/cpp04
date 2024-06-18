#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure:: Cure(const Cure & a) : AMateria("cure")
{
	*this = a;
}

Cure &Cure::operator=(const Cure &a)
{
	if (this != &a)
	{
		this->_type = a._type;
	}
	return *this;
}

Cure::~Cure()
{

}

AMateria* AMateria::clone() const
{
	Cure *cur = new Cure;
	return (cur);
}
