#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class AMateria;

class Cure : public AMateria
{
	public:
	Cure();
	Cure(const Cure &a);
	Cure &operator=(const Cure &a);
	virtual ~Cure();
	
	AMateria* clone() const;
	private:
	
};

#endif