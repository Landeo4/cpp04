#ifndef CURE_HPP
#define CURE_HPP

#include <string.h>
#include <iostream>
#include "AMateria.hpp"
#include <new>

class Cure : public AMateria
{
	public:
	Cure();
	Cure(const Cure &a);
	Cure &operator=(const Cure &a);
	~Cure();
	AMateria* clone() const;
	private:
	
};

#endif