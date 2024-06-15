#include "Character.hpp"

Character::Character(std::string Name): _Name(Name){}
{

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

void equip(AMateria* m)
{

}
