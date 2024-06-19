#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{

}

MateriaSource::MateriaSource(const MateriaSource &a)
{
	*this = a;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &a)
{
	if (this != &a)
	{
		this->_learnedMateria = a._learnedMateria;
	}
	return *this;
}

MateriaSource::~MateriaSource()
{

}

void MateriaSource::learnMateria(MateriaSource* obj)
{
	this->_learnedMateria = obj;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (type.compare("ice"))
	{
		AMateria *ice;
		return (ice);
	}
	else if (type.compare("cure"))
	{
		AMateria *Cure;
		return Cure;
	}
	return (NULL);
}
