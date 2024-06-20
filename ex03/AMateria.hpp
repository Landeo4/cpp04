#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria();
		AMateria(const AMateria &a);
		AMateria &operator=(const AMateria &a);
		virtual ~AMateria();

		std::string const & getType() const; // return materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	private:
};

#endif