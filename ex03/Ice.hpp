#ifndef ICE_HPP
#define ICE_HPP

#include <string.h>
#include <iostream>
#include "AMateria.hpp"
#include <new>

class Ice : public AMateria
{
	public:
	Ice();
	Ice(const Ice &a);
	Ice &operator=(const Ice &a);
	~Ice();
	AMateria* clone() const;
	private:
	
};

#endif