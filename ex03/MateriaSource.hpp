#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string.h>
#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : IMateriaSource
{

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &a);
		MateriaSource &operator=(const MateriaSource &a);
		~MateriaSource();
		MateriaSource(std::string const &type);
		virtual void learnMateria(MateriaSource*);
		virtual AMateria* createMateria(std::string const & type);
	private:
	    MateriaSource* _learnedMateria;
};

#endif