#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string.h>
#include <iostream>
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
class IMateriaSource;

class AMateria : IMateriaSource
{
	protected:
		std::string _type;
	public:
		AMateria();
		AMateria(const AMateria &a);
		AMateria &operator=(const AMateria &a);
		~AMateria();
		AMateria(std::string const &type);
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
		std::string const & getType() const; // return materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	private:
	AMateria* _learnedMateria;
};

#endif