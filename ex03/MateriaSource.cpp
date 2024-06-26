#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i <= 3; i++)
		this->_learnedMateria[i] = NULL; 
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
	for (int i = 0; i <= 3; i++)
		delete this->_learnedMateria[i];
	
}

void MateriaSource::learnMateria(AMateria* obj)
{
	int i = 0;
	if (!obj)
	{
		std::cout << "Problem with your obj" << std::endl;
		return ;
	}
	while (_learnedMateria[i])
		i++;
	if (i == 4)
	{
		std::cout << "Inventory full" << std::endl;
		return ;
	}
	_learnedMateria[i] = obj->clone();
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (type.compare("ice") == 0)
	{
		AMateria* ice = new Ice();
		std::cout << ice->getType() << " have been created in createMateria" << std::endl;
		return ice;
	}
	else if (type.compare("cure") == 0)
	{
		AMateria* cure = new Cure();
		std::cout << cure->getType() << " have been created in createMateria" << std::endl;
		return cure;
	}
	std::cout << "unknown Materia" << std::endl;
	return (NULL);
}
