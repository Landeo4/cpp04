#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure:: Cure(const Cure & a) : AMateria("cure")
{
	*this = a;
}

Cure &Cure::operator=(const Cure &a)
{
	if (this != &a)
	{
		this->_type = a._type;
	}
	return *this;
}

Cure::~Cure()
{

}

AMateria* AMateria::clone() const
{
	Cure *cur = new Cure;
	return (cur);
}






//Salut Eli ca va? J'ai une question pour le cpp, je suis en trian de faire le bonus du cpp04. Dedans il y a une interface pour un personnage, sauf que dans l’énoncer de chaque module il est explicitement dit que je dois faire une forme canonique pour chaque classe. Mon probleme est que dans l'exo, une class herite d'une interface. Donc je dois lui faire une forme canonique ou non? (Sachant que j'ai une erreur quand j'essaye de faire un constructeur)