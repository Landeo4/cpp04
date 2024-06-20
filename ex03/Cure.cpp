#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure created" << std::endl;
}

Cure:: Cure(const Cure & a)
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
