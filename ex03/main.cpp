#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	AMateria* ice = new Ice();
	AMateria* cure = new Cure();
	std::cout << "=== CREATING 4 MATERIA ===" << std::endl;
	src->learnMateria(ice);
	src->learnMateria(cure);
	src->learnMateria(cure);
	src->learnMateria(cure);
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	std::cout << "voici le materia qui va etre equiper " << tmp->getType() << std::endl;
	me->equip(tmp);
	// delete tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	*me = *bob;
	delete bob;
	delete me;
	delete src;
	delete tmp;
	delete ice;
	delete cure;
	return 0;
}

//comment faire un main pour cet exo, il faut verifier:
// si la creation de personnage fonctionne
// si la creation de Materia fonctionne
// si ce sont des deeps copy
// verifier si l'inventaire a bien 4 slots et leurs coherence (position)
// remplir les slots de l'inventaire avec toute sorte de combinaison
//  utiliser plusieurs Materia en meme temps
// free toute les chose au dessus pour verifer les leaks

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	me = bob;
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return 0;
// }
