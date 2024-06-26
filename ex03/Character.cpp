#include "Character.hpp"

Character::Character(void)
{
	this->_Name = "Nameless";
	for (int i = 0; i <= 3; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string Name): _Name(Name)
{
	for (int i = 0; i <= 3; i++)
		this->_inventory[i] = NULL;
	std::cout << _Name << " created" << std::endl;
}

Character::Character(const Character &a)
{
	for (int i = 0; i <= 3; i++)
		this->_inventory[i] = NULL;
	*this = a;
}

Character &Character:: operator=(const Character &a)
{
	if (this != &a)
	{
		this->_Name = a._Name;
		for (int j = 0; j <= 3; j++)
			delete this->_inventory[j];
		for (int i = 0; i <= 3; i++)
			this->_inventory[i] = a._inventory[i]->clone();
	}
	return *this;
}

Character::~Character()
{

}

std::string const &Character::getName() const
{
	return this->_Name;
}

void Character::equip(AMateria* m)
{
	int i = 0;
	while (this->_inventory[i])
		i++;
	if (i > 3)
		return ;
	std::cout << "voici l'index ou ca sera equip " << i << std::endl;
	this->_inventory[i] = m;
	std::cout << " voici le materia qui a ete equipe " << this->_inventory[i]->getType() << std::endl;
}

void Character::unequip(int idx)
{
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	// std::string str = this->_inventory[idx]->getType();
	(void)target;
	if (!this->_inventory[idx])
	{
		std::cout << "nothing is equip at this slot" << std::endl;
		return ;
	}
	if (this->_inventory[idx]->getType().compare("ice") == 0)
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->_inventory[idx]->getType().compare("cure") == 0)
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

// regler cette fonction
// probleme avec le type