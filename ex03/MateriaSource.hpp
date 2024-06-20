#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &a);
		MateriaSource &operator=(const MateriaSource &a);
		~MateriaSource();

		// MateriaSource(std::string const &type);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
	private:
		AMateria* _learnedMateria[4];
};

#endif