#include "Character.hpp"

Character::Character(std::string Name): _Name(Name)
{
	std::cout << _Name << " created" << std::endl;
}

Character::Character(const Character &a)
{
	*this = a;
}

Character &Character:: operator=(const Character &a)
{
	if (this != &a)
	{
		this->_Name = a._Name;
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
	AMateria* cpy = m;
	this->_inventory[i] = cpy;
}

void Character::unequip(int idx)
{
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (this->_inventory[idx])
		std::cout << "* shoots an ice bolt at " << &target << " *" << std::endl;
	else if (this->_inventory[idx])
		std::cout << "* heals " << &target << "'s wounds *" << std::endl;
}
