#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class AMateria;

class Ice : public AMateria
{
	public:
	Ice();
	Ice(const Ice &a);
	Ice &operator=(const Ice &a);
	virtual ~Ice();
	
	AMateria* clone() const;
	private:

};

#endif