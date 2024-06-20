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
		for (int i = 0; i < 3; i++)
			this->_learnedMateria[i] = a._learnedMateria[i];
	}
	return *this;
}

MateriaSource::~MateriaSource()
{

}

void MateriaSource::learnMateria(AMateria* obj)
{
	_learnedMateria[1] = obj;
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
