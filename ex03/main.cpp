#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	std::cout << " creating a Character" << std::endl;
	IMateriaSource* src = new MateriaSource();
	AMateria* ice = new Ice();
	AMateria* cure = new Cure();
	ICharacter* Tom = new Character("tom");
	ICharacter* dummy = new Character("dummy");
	Tom->use(0, *dummy);
	Tom->use(1, *dummy);
	std::cout << "=== CREATING 4 MATERIA ===" << std::endl;
	src->learnMateria(ice);
	src->learnMateria(cure);
	src->learnMateria(cure);
	src->learnMateria(cure);
	std::cout << "Deep copy verification" << std::endl;
	std::cout << "verification of all inventory slot position and coherence" << std::endl;
	ICharacter* me = new Character("me");
	AMateria* tmp;
	AMateria* ew;
	tmp = src->createMateria("ice");
	std::cout << "voici le materia qui va etre equiper " << tmp->getType() << std::endl;
	me->equip(tmp);
	ew = src->createMateria("cure");
	me->equip(ew);
	ICharacter* bob = new Character("bob");
	std::cout << "using AMateria" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "copying character and check if he have the same spell" << std::endl;
	*me = *bob;
	delete bob;
	delete ew;
	delete me;
	delete tmp;
	delete src;
	delete ice;
	delete cure;
	delete Tom;
	delete dummy;
	return 0;
}

//probleme avec le type

//comment faire un main pour cet exo, il faut verifier:
// si la creation de personnage fonctionne
// si la creation de Materia fonctionne
// si ce sont des deeps copy
// verifier si l'inventaire a bien 4 slots et leurs coherence (position)
// remplir les slots de l'inventaire avec toute sorte de combinaison
//  utiliser plusieurs Materia en meme temps
// faire tous ca en verifiant les deep copy
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
