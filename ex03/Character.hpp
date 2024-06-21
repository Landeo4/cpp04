#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <new>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	public:
	Character(void);
	Character(std::string Name);
	Character(const Character &a);
	Character &operator=(const Character &a);
	~Character();
	virtual std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	private:
	std::string _Name;
	AMateria* _inventory[4];
};

#endif